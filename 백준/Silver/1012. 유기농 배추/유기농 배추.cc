#include <bits/stdc++.h>
using namespace std;

// 최대 길이가 50 -> 여유있게 54
int bat[54][54];
int visited[54][54];
int num_tc;
int num_bc;
int N, M;
int ans;
int temp_y, temp_x;

const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, -1, 0, 1};
 
void dfs(int y, int x)
{
    visited[y][x] = 1;
    for (int k=0; k<4; k++)
    {
        int nx = x + dx[k];
        int ny = y + dy[k];
        
        if (nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
        if (visited[ny][nx] == 1) continue;
        if (bat[ny][nx] == 0) continue;
        
        dfs(ny, nx);
    }
    return;
}

int main()
{
    // 연결된 컴포넌트 찾는 문제 -> DFS로 풀이
    
    
    
    cin >> num_tc;
    
    while(num_tc--)
    {
        fill(&bat[0][0], &bat[0][0] + 54 * 54, 0);
        fill(&visited[0][0], &visited[0][0] + 54 * 54, 0);
        ans = 0;
        
        cin >> M >> N >> num_bc;
        
        for (int i=0; i<num_bc; i++)
        {
            cin >> temp_x >> temp_y;
            bat[temp_y][temp_x]++;
        }
        
        // dfs 구현
        
        for (int i=0; i<N; i++)
        {
            for (int j=0; j<M; j++)
            {
                if (visited[i][j] == 0 && bat[i][j] == 1)
                {
                    dfs(i,j);
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }
    
    return 0;
}