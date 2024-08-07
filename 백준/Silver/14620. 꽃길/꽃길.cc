#include <bits/stdc++.h>
using namespace std;

int n, ret=1e9;
int p[14][14];
int visited[14][14];

const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

bool check(int y, int x)
{
    if (visited[y][x]) return 0;
    
    for (int i=0; i<4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        
        if (ny < 0 || nx < 0 || ny >= n || nx >= n) return 0;
        if (visited[ny][nx]) return 0;
    }
    return 1;
}


int setflower(int y, int x)
{
    visited[y][x] = 1;
    
    int s = p[y][x];
    
    for (int i=0; i<4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        visited[ny][nx] = 1;
        
        s += p[ny][nx];
    }
    
    return s;
}


void eraseflower(int y, int x)
{
    visited[y][x] = 0;
    
    for (int i=0; i<4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        
        visited[ny][nx] = 0;
    } 
}

void flower(int cnt, int hap)
{
    if (cnt == 3)
    {
        ret = min(ret, hap);
        return;
    }
    
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if(check(i,j))
            {
                flower(cnt+1, hap + setflower(i,j));
                eraseflower(i,j);
            }
        }
    }
}




int main ()
{
    cin >> n;
    
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin >> p[i][j];
        }
    }
    
    flower(0, 0);
    
    cout << ret;
    
}