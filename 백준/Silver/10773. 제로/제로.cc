#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main()
{
    int num_orders = 0;
    int wrong = 0;
    
    cin >> num_orders;              // 정수 K
    
    stack<int> stk;
    

    for (int i=0; i<num_orders; i++)
    {
        cin >> wrong;
        
        if (wrong == 0)
        {
            stk.pop();
        }
        else
        {
            stk.push(wrong);
        }
    }
    
    int total_num = stk.size();
    int total_add = 0;
    
    for (int i=0; i < total_num; i++)
    {
        total_add += stk.top();
        stk.pop();
    }
    
    cout << total_add << "\n";

    
    return 0;
}