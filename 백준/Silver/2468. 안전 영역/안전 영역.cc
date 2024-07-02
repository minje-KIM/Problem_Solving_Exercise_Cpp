#include <bits/stdc++.h>
using namespace std;

int num;
const int dy[4] = {0, -1, 0, 1};
const int dx[4] = {1, 0, -1, 0};

int visited[104][104];

int m[104][104];
int temp_m[104][104];

int max_num = 1;
int result[102];


void dfs(int y, int x)
{
    visited[y][x] = 1;
    for (int k=0; k<4; k++)
    {
        int ny = y + dy[k];
        int nx = x + dx[k];
        
        if (nx < 0 || nx >= num || ny < 0 || ny >= num) continue;
        if (visited[ny][nx] == 1) continue;
        if (temp_m[ny][nx] == 0) continue;
        
        dfs(ny,nx);
    }
    return;
}



//connected component => dfs
int main()
{
    cin >> num;
    
    for (int i=0; i<num; i++)
    {
        for (int j=0; j<num; j++)
        {
           cin >> m[i][j];
        }
    }
    
    
    for (int k=1; k<=100; k++)
    {
        fill(&visited[0][0], &visited[0][0] + 104 * 104, 0);
        fill(&temp_m[0][0], &temp_m[0][0] + 104 * 104, 0);
        
        int ans = 0;
        // 0과 1로 이루어진 맵 형태로 변환
        for (int i=0; i<num; i++)
        {
            for (int j=0; j<num; j++)
            {
                int p = m[i][j] - k;
                
                if (p > 0)
                    temp_m[i][j] = 1;
                else
                    temp_m[i][j] = 0;
            }
        }
        
        // dfs 수행
        for (int i=0; i<num; i++)
        {
            for (int j=0; j<num; j++)
            {
                if (visited[i][j] == 0 && temp_m[i][j] == 1)
                {
                    dfs(i,j);
                    ans++;
                }
            }
        }
        
        result[k-1] = ans; 
        
    }
    

    for (int i=0; i<102; i++)
    {
        if(result[i] > max_num)
            max_num = result[i];
    }
    
    
    cout << max_num;
    

    
}