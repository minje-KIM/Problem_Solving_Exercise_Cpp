#include <bits/stdc++.h>
using namespace std;

int n;
int num[104];
int x;
int ret;

int main ()
{
    cin >> n;
    
    for (int i=0; i<n; i++)
    {
        cin >> num[i];
    }
    
    cin >> x;

    // for (int i=0; i<n; i++)
    // {
    //     cout << num[i] << " ";
    // }



    for (int i=0; i<n; i++)
    {
        if (x == num[i])
            ret++;
    }
    
    cout << ret << "\n";
    return 0;
}