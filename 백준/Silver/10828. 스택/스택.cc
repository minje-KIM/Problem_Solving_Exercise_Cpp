#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int temp = 0;
    int num_order = 0;
    string order = "";
    stack<int> mj_stack;
    
    cin >> num_order;
    
    for (int i=0; i<num_order; i++)
    {
        cin >> order;
        
        if (order == "push")
        {
            cin >> temp;
            mj_stack.push(temp);
        }
        else if (order == "top")
        {
            if (mj_stack.size() == 0)
            {
                cout << "-1" << "\n"; 
            }            
            else
            {
                cout << mj_stack.top() << "\n";

            }
        }
        else if (order == "size")
        {
            cout << mj_stack.size() << "\n";
        }
        else if (order == "empty")
        {
            cout << mj_stack.empty() << "\n";
        }
        else if (order == "pop")
        {
            if (mj_stack.size() == 0)
            {
                cout << "-1" << "\n"; 
            }
            else
            {
                cout << mj_stack.top() << "\n";
                mj_stack.pop();
            }
        }
        else
        {
            continue;
        }
        
    }
    


    return 0;
}