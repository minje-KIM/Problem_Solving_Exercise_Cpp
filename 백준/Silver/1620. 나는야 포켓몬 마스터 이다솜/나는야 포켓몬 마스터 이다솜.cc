#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;
map<int, string> mp2;

string temp, tp2;
int n, s;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n >> s;
    
    for (int i=0; i<n; i++)
    {
        cin >> temp;
        mp[temp] = i+1;
        mp2[i+1] = temp;
    }
    

    
    for (int j=0; j<s; j++)
    {
        cin >> tp2;
        
        if (atoi(tp2.c_str()) == 0)
            cout << mp[tp2] << "\n";
        else
        {
            cout << mp2[atoi(tp2.c_str())] << "\n";
        }
    }
    


    return 0;
}



