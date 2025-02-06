#include <bits/stdc++.h>
using namespace std;

queue<int> q;
int n;
int x2;
string x1;

int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n;
    
    for (int i=0; i<n; i++)
    {
        cin >> x1;
        
        if (x1 == "push")
        {
            int temp;
            cin >> temp;
            q.push(temp);
        }
        else if (x1 == "pop")
        {
            if (q.size() == 0)
            {
                cout << -1 << "\n";
                continue;
            }
            
            cout << q.front() << "\n";
            q.pop();
        }
        else if (x1 == "size")
        {
            cout << q.size() << "\n";
        }
        else if (x1 == "empty")
        {
            if (q.size() == 0)
                cout << 1 << "\n";
            else 
                cout << 0 << "\n";
        }
        else if (x1 == "front")
        {
            if (q.size() == 0)
                cout << -1 << "\n";
            else 
                cout << q.front() << "\n";
        }
        else if (x1 == "back")
        {
            if (q.size() == 0)
                cout << -1 << "\n";
            else 
                cout << q.back() << "\n";
        }
    }
    
    
    
    
    return 0;
}