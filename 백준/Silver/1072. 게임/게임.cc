#include <bits/stdc++.h>
using namespace std;

long long x, y;
long long t1, t2;
long long lo, hi;
long long ret = -1;

int main ()
{
    
    cin >> x >> y;
    
    t1 = (100 * y / x);
    
    lo = 1; hi = 1000000000;
    
    while(lo <= hi)
    {
        long long mid = (lo + hi) / 2;
        t2 = (100 * (y + mid)) / (x + mid);
        
        if (t2 != t1)
        {
            hi = mid - 1;
            ret = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }
    
    cout << ret << "\n";
    
    return 0;
    
    
}