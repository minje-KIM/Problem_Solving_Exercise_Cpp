#include <bits/stdc++.h>
using namespace std;


int temp;
int avg;
vector<int> vec;

int main ()
{
    for (int i=0; i<5; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }
    
    sort(vec.begin(), vec.end());
    
    for (auto i : vec)
        avg += i;
    avg = avg /5;
    
    cout << avg << "\n";
    cout << vec[2] << "\n";
    
    
    
    return 0;
    
}