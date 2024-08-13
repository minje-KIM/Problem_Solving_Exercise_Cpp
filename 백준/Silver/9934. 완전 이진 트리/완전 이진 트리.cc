#include <bits/stdc++.h>
using namespace std;

int k, a[1030];
vector<int> ret[14];

void go(int s, int e, int lv)
{
    if (s > e) return;
    if (s == e)
    {
        ret[lv].push_back(a[s]);
        return;
    }
    
    int mid = (s+e) / 2;
    ret[lv].push_back(a[mid]);
    go(s, mid-1, lv+1);
    go(mid+1, e, lv+1);
    
    return;
}



int main ()
{
    cin >> k;
    
    int num = pow(2, k) - 1;
    
    for (int i=0; i<num; i++)
    {
        cin >> a[i];
    }
    
    go(0, num-1, 1);
    
    for (int i=1; i <=k; i++)
    {
        for (int j : ret[i])
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
