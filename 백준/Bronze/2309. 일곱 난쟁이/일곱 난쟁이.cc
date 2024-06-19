#include <iostream>
#include <array>
#include <algorithm>
using namespace std;


array<int,9>numbers = {0};
int sum = 0;
int rem = 0;
int idx1 = 0;
int idx2 = 0;


int main()
{
    for (int i=0; i<9; i++)
    {
        cin >> numbers[i];
    }
    
    for (int i=0; i<9; i++)
    {
        sum += numbers[i];
    }
    
    rem = sum - 100;
    
    for (int i=0; i<9; i++)
            for (int j=0; j<9; j++)
            {
                if (i == j)
                    continue;
                
                if(numbers[i] + numbers[j] == rem)
                {
                    idx1 = numbers[i];
                    idx2 = numbers[j];
                }
            }
    
    sort(numbers.begin(), numbers.end());
    
    for (auto it= numbers.begin(); it != numbers.end(); it++)
    {
        auto element = (*it);
        
        if ((element == idx1) || (element == idx2))
        {
            continue;
        }
        
        cout << element << "\n";
    }
    

    

    return 0;
}