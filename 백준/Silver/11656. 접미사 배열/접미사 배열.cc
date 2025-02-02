#include <bits/stdc++.h>
using namespace std;

string x;
string temp;
vector<string> vec;

int main ()
{
    cin >> x;
    
    int len = x.length();
    temp = x;
    // resize.vec(len);
    
    vec.push_back(x);
    
    for (int i=0; i<len-1; i++)
    {
        temp = temp.erase(0,1);
        // cout << temp << "\n";
        vec.push_back(temp);
    }
    
    sort(vec.begin(), vec.end());
    
    for (auto i : vec)
        cout << i << "\n";
        
    return 0;
}