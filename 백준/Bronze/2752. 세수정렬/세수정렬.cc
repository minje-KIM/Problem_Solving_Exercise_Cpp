#include <bits/stdc++.h>
using namespace std;

int temp;
vector<int> numbers;

int main ()
{
    
    for (int i=0; i<3; i++)
    {
        cin >> temp;
        numbers.push_back(temp);
    }
    
    sort(numbers.begin(), numbers.end());
    
    
    
    for (auto i : numbers)
        cout << i << " ";
    
    
    
    return 0;
}