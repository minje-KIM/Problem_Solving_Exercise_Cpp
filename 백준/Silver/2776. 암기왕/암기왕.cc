#include <bits/stdc++.h>
using namespace std;

int t;
int temp;
int n, m;


int check(int temp, vector<int> &v1)
{
    int lo = 0;
    int hi = v1.size() - 1;
    int mid;
    
    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        if (v1[mid] > temp)
            hi = mid - 1;
        else if (v1[mid] == temp)
            return 1;
        else
            lo = mid + 1;
    }
    
    return 0;
}



int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> t;
    
    while(t--)
    {
        vector<int> v1;
        cin >> n;
        
        for (int i=0; i<n; i++)
        {
            cin >> temp;
            v1.push_back(temp);
        }
        
        sort(v1.begin(), v1.end());

        cin >> m;
        
        for (int j=0; j<m; j++)
        {
            cin >> temp;
            cout << check(temp, v1) << "\n";
        }     
    }

}