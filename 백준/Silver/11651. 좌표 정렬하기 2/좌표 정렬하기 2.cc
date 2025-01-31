#include <bits/stdc++.h>
using namespace std;

int num;
vector<pair<int,int>> vec;

int main ()
{
    cin >> num;
    
    vec.resize(num);
    
    for (int i=0; i<num; i++)
    {
        cin >> vec[i].second >> vec[i].first;
    }
    
    
    sort(vec.begin(), vec.end());
    
    
    for (int i=0; i<num; i++)
    {
        cout << vec[i].second << " " << vec[i].first << "\n";
    }
    
    
    
    return 0;
}