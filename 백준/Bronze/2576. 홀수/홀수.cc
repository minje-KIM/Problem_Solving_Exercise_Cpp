#include <bits/stdc++.h>
using namespace std;

int full[7];
int ret;
vector<int> odd;


int main ()
{
    for (int i=0; i<7; i++)
    {
        cin >> full[i];
        
        if (full[i] % 2 != 0)
        {
            odd.push_back(full[i]);
        }
    }
    
    sort(odd.begin(), odd.end());
    
    if (odd.size () == 0)
    {
        cout << "-1" << "\n";
        return 0;
    }
    
    for (int i=0; i< odd.size(); i++)
    {
        ret += odd[i];
    }
    
    cout << ret << "\n";
    cout << odd[0] << "\n";
    
    return 0;
}