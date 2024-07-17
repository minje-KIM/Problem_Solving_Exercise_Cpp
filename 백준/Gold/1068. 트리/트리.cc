#include <bits/stdc++.h>
using namespace std;

vector<int> s[54];

int visited[54];

int n, t;
int d;

int root;

int dfs(int n)
{
    int ret=0;
    int child=0;
    visited[n] == 1;
    
    for (int there : s[n])
    {
        if (visited[there]) continue;
        
        ret += dfs(there);
        child++;
    }
    
    if(child == 0) return 1;
    
    return ret;
}



int main ()
{
    cin >> n;
    
    for (int i=0; i<n; i++)
    {
        cin >> t;
        
        if(t == -1)
        {
            root = i;
            continue;
        }

        s[t].push_back(i);
    }

    cin >> d;
    
    if (d == root)
    {
        cout << 0 << "\n";
        return 0;
    }
    
    visited[d] = 1;
    
    cout << dfs(root) << "\n";

    return 0;
}

