#include <bits/stdc++.h>
using namespace std;

vector<int> adj[10004];
int visited[10004];
int num[10004];

int ret;
int n, m;

int mx;
int t1, t2;

int dfs(int u)
{
    int ret=1;
    visited[u] = 1;
    
    for (int v : adj[u])
    {
        if (visited[v]) continue;
        
        ret += dfs(v);
    }
    
    return ret;
}


int main ()
{
    cin >> n >> m;
    
    for (int i=0; i<m; i++)
    {
        cin >> t1 >> t2;
        adj[t2].push_back(t1);
    }
    
    for (int i=1; i<=n; i++)
    {
        memset(visited, 0, sizeof(visited));
        num[i] = dfs(i);
        mx = max(num[i], mx);
    }
    
    for (int i = 1; i <= n; i++) 
    {
        if (mx == num[i]) 
            cout << i << " "; 
    }


    
    return 0;
}