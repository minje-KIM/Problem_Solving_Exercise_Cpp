#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll s, c;
ll chk[1000004];
ll lo, hi;
ll maxi;
ll ret;
ll sum;
ll mid;


bool check(ll mid)
{
    ll tmp = 0;
    for (int i=0; i<s; i++)
    {
        tmp += (chk[i] / mid);
    }
    
    return (tmp >= c);
}


int main ()
{
    cin >> s >> c;
    
    for (int i=0; i<s; i++)
    {
        cin >> chk[i];
        
        sum += chk[i];
        
        if (chk[i] > maxi)
            maxi = chk[i];
    }
    
    lo = 1;
    hi = maxi;
    
    while (lo <= hi)
    {
        mid = (lo + hi) / (1LL * 2) ;

        if (check(mid))
        {
            lo = mid + 1;
            ret = mid;
        }
        else
        {
            hi = mid - 1;
        }
        
    }
    
    cout << sum - (ret * c) << "\n";
    
    
    return 0;
    
}