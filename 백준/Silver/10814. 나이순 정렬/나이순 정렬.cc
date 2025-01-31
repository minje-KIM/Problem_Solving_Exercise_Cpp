#include <bits/stdc++.h>
using namespace std;

int num;
vector<pair<int, string>> vec;

int main ()
{
    cin >> num;
    
    vector<pair<int, string>> vec(num);
    
    for (int i=0; i<num; i++)
    {
        cin >> vec[i].first >> vec[i].second;
    }
    
    stable_sort(vec.begin(), vec.end(), [](const pair<int, string> &a, const pair<int, string> &b)
    {
        return a.first < b.first;
    });
    
    for (int i=0; i<num; i++)
    {
        cout << vec[i].first << " " << vec[i].second << "\n";
    }
    
    return 0;
}