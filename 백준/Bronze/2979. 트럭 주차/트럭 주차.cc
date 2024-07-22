#include <bits/stdc++.h>
using namespace std;

int a, b, c;
int cnt[105];
int x, y;
int ret;

int main ()
{
    cin >> a >> b >> c;
    
    for (int i=0; i < 3; i ++)
    {
        cin >> x >> y;
        
        for (int j=x; j<y; j++)
            cnt[j]++;
    }

    for (int i=1; i<100; i++)
    {
        if (cnt[i] == 1) ret += a;
        else if (cnt[i] == 2) ret += (2*b);
        else if (cnt[i] == 3) ret += (3*c);
    }   
    
    cout << ret << "\n";
    
    return 0;
}



