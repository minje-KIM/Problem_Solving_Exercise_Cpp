#include <bits/stdc++.h>
using namespace std;


int n;
int t;
string a, b;

int main ()
{
    cin >> n;
    
    for (int i=0; i<n; i++)
    {
        map<string, int> m;
        cin >> t;
        
        for (int j=0; j<t; j++)
        {
            cin >> a >> b;
            m[b]++;
        }
        
        long long ret = 1;
        
        for (auto c : m)
        {
            ret *= ((long long)c.second + 1);
        }
        ret--;
        cout << ret << "\n";
    }
}