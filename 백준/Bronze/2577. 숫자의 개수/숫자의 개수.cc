#include <iostream>
#include <string>
#include <array>
using namespace std;


int main()
{
    int num1, num2, num3 = 0;
    int num_result = 0;
    int temp = 0;
    
    array<int, 10> numbers = {0};

    cin >> num1 >> num2 >> num3;

    num_result = num1 * num2 * num3;

    string result = to_string(num_result);
    int num_digit = result.size();      // 8 
    

    for (int k=0; k<num_digit; k++)
        {
            temp = (int)result[k] - '0';
            numbers[temp]++;
        }

    for (int k=0; k<numbers.size(); k++)
    {
        cout << numbers[k] << "\n";
    }


    return 0;
}