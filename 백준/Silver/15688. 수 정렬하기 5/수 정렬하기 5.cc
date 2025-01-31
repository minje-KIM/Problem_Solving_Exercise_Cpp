#include <bits/stdc++.h>
using namespace std;

int num;
vector<int> vec;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> num;
    vec.resize(num);
    
    
    for (int i=0; i<num; i++)
    {
        cin >> vec[i];
    }
    
    sort(vec.begin(), vec.end());
    
    
    for (auto i : vec)
        cout << i << "\n";
    
    return 0;
}