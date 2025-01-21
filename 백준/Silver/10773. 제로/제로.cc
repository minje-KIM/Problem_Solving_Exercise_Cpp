#include <bits/stdc++.h> 
using namespace std;

stack<int> stk;

int a;
int num;
int ret;


int main ()
{
    cin >> num;
    
    for (int i=0; i<num; i++)
    {
        cin >> a;
        
        if (a == 0)
        {
            stk.pop();
            continue;
        }
        
        stk.push(a);
    }
    
    while(!stk.empty())
    {
        ret += stk.top();
        stk.pop();
    }
    
    cout << ret << "\n";
    
    return 0;
}