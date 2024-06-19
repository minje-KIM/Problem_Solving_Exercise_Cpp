#include <iostream>
#include <array>
#include <algorithm>
using namespace std;



int main()
{
    int num = 0;
    int sum = 0;
    int success = 0;
    cin >> num;
    cin >> sum;
    
    array<int,15001> num_list = {};
    
    for (int i=0; i<num; i++)
    {
        cin >> num_list[i];
    }
    
    for (int i=0; i<num; i++)
    {
        for (int j=i;j<num; j++)
        {
            if (i==j)
                continue;
            
            if (num_list[i] + num_list[j] == sum)
            {
                success += 1;
            }
        }
    }
    
    cout << success << "\n";

    

    return 0;
}