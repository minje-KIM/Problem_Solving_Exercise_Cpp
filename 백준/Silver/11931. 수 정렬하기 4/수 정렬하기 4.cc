#include <bits/stdc++.h>
using namespace std;

int num;
int temp;
vector<int> n;

int main ()
{
    cin >> num;
    
    for (int i=0; i<num; i++)
    {
        cin >> temp;
        n.push_back(temp);
    }
    
    
    sort(n.begin(), n.end(), greater<int>());  
    
    for (auto i : n)
        cout << i << "\n";
    
    return 0;
}