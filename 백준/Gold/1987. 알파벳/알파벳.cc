#include <bits/stdc++.h>
using namespace std;

int ret;

int visited[30];
char a[24][24];

int r,c;

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};

void go(int y, int x, int cnt)
{
    ret = max(cnt, ret);

    for (int i=0; i<4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (ny < 0 || nx < 0 || ny >= r || nx >= c) continue;

        int next = a[ny][nx] - 'A';
        
        if (visited[next] == 0)
        {
            visited[next] = 1;
            go(ny, nx, cnt + 1);
            visited[next] = 0;
        }
    }
    
    return;
}


int main ()
{
    cin >> r >> c;
    
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            cin >> a[i][j];
        }
    }
    
    visited[a[0][0] - 'A'] = 1;
    
    
    
    go(0, 0, 1);
    
    cout << ret << "\n";
    
    return 0;
    
    
}



