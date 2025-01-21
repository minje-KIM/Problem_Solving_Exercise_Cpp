#include <bits/stdc++.h>
using namespace std;

const int dx[] = {0, -1, 0, 1};
const int dy[] = {1, 0, -1, 0};

char a[105][105];
int visited[105][105];

int ret_for_jrsy;
int ret_for_norm;
int ret_for_red;
int ret_for_blue;
int ret_for_green;

int w;


void dfs(int y, int x)
{
    visited[y][x] = 1;
    
    for (int i=0; i<4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        
        if (ny < 0 || ny >= w || nx < 0 || nx >= w) continue;
        if (visited[ny][nx] == 1) continue;
        if (a[ny][nx] == 'B') continue;
        
        dfs(ny, nx);
    }
    
    return;
}


void dfs_n(int y, int x)
{
    visited[y][x] = 1;
    
    for (int i=0; i<4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        
        if (ny < 0 || ny >= w || nx < 0 || nx >= w) continue;
        if (visited[ny][nx] == 1) continue;
        if (a[ny][nx] != a[y][x]) continue;
        
        dfs_n(ny, nx);
    }
    
    return;
}


int main ()
{
    cin >> w;
    
    for (int i=0; i<w; i++)
    {
        for (int j=0; j<w; j++)
        {
            cin >> a[i][j];
        }
    }
    
    for (int i=0; i<w; i++)
    {
        for (int j=0; j<w; j++)
        {
            if(visited[i][j] == 0 && (a[i][j] != 'B'))
            {
                dfs(i,j);
                ret_for_jrsy++;
            }
        }
    }
    

    fill(&visited[0][0], &visited[0][0] + 105 * 105, 0);
    
    
    for (int i=0; i<w; i++)
    {
        for (int j=0; j<w; j++)
        {
            if (visited[i][j] == 0 && (a[i][j] == 'R'))
            {
                dfs_n(i,j);
                ret_for_red++;
            }
            
            if (visited[i][j] == 0 && (a[i][j] == 'G'))
            {
                dfs_n(i,j);
                ret_for_green++;
            }
            
            if (visited[i][j] == 0 && (a[i][j] == 'B'))
            {
                dfs_n(i,j);
                ret_for_blue++;
            }
    
    
        }
    }
    
    ret_for_norm = ret_for_red + ret_for_blue + ret_for_green;
    
    
    cout << ret_for_norm << " " <<ret_for_jrsy + ret_for_blue  << "\n";

    return 0;
}