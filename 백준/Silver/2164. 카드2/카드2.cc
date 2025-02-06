#include <bits/stdc++.h>
using namespace std;

int n;
queue<int> q;

int main ()
{
    cin >> n;
    
    for (int i=1; i<=n; i++)
    {
        q.push(i);
    }
    
    while(q.size() > 0)
    {
        if (q.size() == 1)
        {
            cout << q.front() << "\n";
            return 0;
        }
        
        
        q.pop();
        
        if (q.size() == 1)
        {
            cout << q.front() << "\n";
            return 0;
        }
        
        int temp = q.front();
        q.pop();
        q.push(temp);
        

    }
    
    return 0;
}