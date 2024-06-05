#include <iostream>
#include <deque>
#include <string>
using namespace std;


int main()
{
    int num_orders = 0;
    int number = 0;
    cin >> num_orders;
    deque<int> dq;
    string order = "";
    
    for (int i=0; i<num_orders; i++)
    {
        cin >> order;
        
        if (order == "push_front")
        {
            cin >> number;
            dq.push_front(number);
        }
        else if (order == "push_back")
        {
            cin >> number;
            dq.push_back(number);
        }
        else if (order == "pop_front")
        {
            if (dq.size() == 0)
            {
                cout << "-1" << "\n";
            }
            else
            {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }
        else if (order == "pop_back")
        {
            if (dq.size() == 0)
            {
                cout << "-1" << "\n";
            }
            else
            {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        }
        else if (order == "size")
        {
            cout << dq.size() << "\n";
        }
        else if (order == "empty")
        {
            cout << dq.empty() << "\n";
        }
        else if (order == "front")
        {
            if (dq.size() == 0)
            {
                cout << "-1" << "\n";
            }
            else
            {
                cout << dq.front() << "\n";
            }
        }
        else if (order == "back")
        {
            if (dq.size() == 0)
            {
                cout << "-1" << "\n";
            }
            else
            {
                cout << dq.back() << "\n";
            }
        }
        else 
            continue;
    }
    
    
    return 0;
}