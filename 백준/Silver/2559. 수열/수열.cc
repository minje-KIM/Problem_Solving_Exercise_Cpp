#include <bits/stdc++.h>
using namespace std;

int psum[100005];

int n;
int a;
int temp;

int ret = -10000004;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n >> a;
    
    for (int i=1; i<=n; i++)
    {
        cin >> temp;
        psum[i] = psum[i-1] + temp;
    }
    
    for (int i=a; i<=n; i++)
    {
        ret = max(ret, psum[i] - psum[i-a]);
    }
    
    cout << ret << "\n";
    
    return 0;
}



