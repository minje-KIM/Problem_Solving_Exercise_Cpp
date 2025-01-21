#include <bits/stdc++.h>
using namespace std;

stack<int> stk;



int num;
int temp;

string result = "";
int sy = 1;

int main()
{
    cin >> num;
    
    for (int i=0; i<num; i++)
    {
        
        cin >> temp;
        
        while (sy <= temp)
        {
            stk.push(sy++);
            result += "+\n";
        }
        
        if (stk.top() != temp)
        {
            cout << "NO\n";
            return 0;
        }
        
        stk.pop();
        result += "-\n";
        
    }
    
    cout << result << "\n";
    
    return 0;
}