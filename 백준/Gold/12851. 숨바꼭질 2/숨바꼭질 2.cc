#include <bits/stdc++.h>
using namespace std;


vector<int> v;

int n, k;
int visited[200004];
int cnt[200004];

void bfs(int here)
{
    queue<int> q;
    q.push(here);
    
    while(q.size())
    {
        int now = q.front();
        q.pop();
        
        for (int next : {now-1, now+1, now*2})
        {
            if (0 > next || next >= 200000) continue;
            if(visited[next] == 0)
            {
                q.push(next);
                visited[next] = visited[now] + 1;
                cnt[next]  = cnt[next] + cnt[now];
            }
            else if (visited[next] == visited[now] + 1)
            {
                cnt[next]  = cnt[next] + cnt[now];
            }
        }
    }
    
    return;
}

int main()
{
    cin >> n >> k;
    
    if (n == k)
    {
        cout << 0 << "\n";
        cout << 1 << "\n";
        return 0;
    }
    
    visited[n] = 1;
    cnt[n] = 1;

    bfs(n);
    
    cout << visited[k] - 1 << "\n";
    cout << cnt[k] << "\n";
    return 0;
    
    
}