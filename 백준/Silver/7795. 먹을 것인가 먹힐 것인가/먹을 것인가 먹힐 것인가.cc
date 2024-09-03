#include <bits/stdc++.h>
using namespace std;

int tc;
int n, m;

int main ()
{
    cin >> tc;
    
    for (int i=0; i<tc; i++)
    {
        int ret = 0;
        
        cin >> n >> m;
        
        vector<int> a;
        vector<int> b;
        
        for (int j=0; j<n; j++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        
        for (int k=0; k<m; k++)
        {
            int temp2;
            cin >> temp2;
            b.push_back(temp2);
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        for (int i=0; i<n; i++)
        {
            auto pos = lower_bound(b.begin(), b.end(), a[i]);
            ret += (int)(pos - b.begin());
        }
        cout << ret << "\n";
    
    }
}