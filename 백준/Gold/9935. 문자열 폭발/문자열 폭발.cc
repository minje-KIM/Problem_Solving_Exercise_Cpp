#include <bits/stdc++.h>
using namespace std;

string s, t, ret;

stack<char> stk;

int main ()
{
    cin >> s >> t;
    
    for (char a : s)
    {
        stk.push(a);
        
        if (stk.size() >= t.size() && stk.top() == t[t.size() - 1])
        {
            string ss = "";
            for (char i : t)
            {
                ss += stk.top();
                stk.pop();
            }
            reverse(ss.begin(), ss.end());
            
            if (t != ss)
            {
                for (int i : ss)
                    stk.push(i);
            }
        }
    }
    
    if (stk.size() == 0)
    {
        cout << "FRULA" << "\n";
    }
    else
    {
        while(stk.size())
        {
            ret += stk.top();
            stk.pop();
        }
        reverse(ret.begin(), ret.end());
        cout << ret << "\n";
    }
    
    
    
    
}