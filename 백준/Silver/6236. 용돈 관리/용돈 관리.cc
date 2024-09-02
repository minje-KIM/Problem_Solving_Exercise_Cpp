#include <bits/stdc++.h>
using namespace std;

int a[100004];
int n, m;
int ret= 1000;
int lo, hi;
int mx;

bool check(int mid)
{
    int cnt = 1;
    int temp = mid;
    
    for (int i=0; i<n; i++) 
    {
        
        if (mid < a[i])
        {
            mid = temp;
            cnt++;
        }
        
        mid = mid - a[i];
        
    }
    
    return (cnt <= m);
}


int main()
{
    cin >> n >> m;
    
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
        mx = max(a[i], mx);
    }
    
    lo = mx; hi = 1e9 + 4;
    
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        
        if (check(mid))
        {
            hi = mid - 1;
            ret = mid;
        }
        else lo = mid + 1;
    }
    
    cout << ret << "\n";
    
    return 0;
}