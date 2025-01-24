#include <bits/stdc++.h>
using namespace std;

int a, b, c;
int ret;

int main()
{
    cin >> a >> b >> c;
    
    if (a == b && b == c)
    {
        ret = 10000 + (a * 1000);
    }
    else if (a == b || b == c || c == a)
    {
        if (a == b)
        {
            ret = 1000 + (a * 100);
        }
        else if (b == c)
        {
            ret = 1000 + (b * 100);
        }
        else if (a == c)
        {
            ret = 1000 + (a * 100);
        }
    }
    else
    {
        int temp = max({a, b, c});
        ret = temp * 100;
    }
    
    cout << ret << "\n";
    
    return 0;
}