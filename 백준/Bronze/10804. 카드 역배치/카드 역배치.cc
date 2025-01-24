#include <bits/stdc++.h>
using namespace std;

int a, b;
int temp;
vector<int> vec;

int main ()
{
    for (int i=1; i<=20; i++)
    {
        vec.push_back(i);
    }
    
    // for (auto i : vec)
    //     cout << i << " ";
    // cout << "\n";
    
    
    for (int i=0; i<10; i++)
    {
        cin >> a >> b;
        
        reverse(vec.begin()+(a-1), vec.begin()+b);
    }

    for (auto i : vec)
        cout << i << " ";
        
        

    return 0;
}