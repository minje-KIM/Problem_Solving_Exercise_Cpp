#include <bits/stdc++.h>
using namespace std;

int tb[104][104];
int visited[104][104];
int m, n, k;

const int dy[] = {0, 1, 0, -1};
const int dx[] = {1, 0, -1, 0};

int rec[4];
vector<int> result;
int ret;

int sub_ret;

//connected component -> dfs
void dfs(int y, int x)
{
    sub_ret++;
    visited[y][x] = 1;
    
    for (int k=0; k<4; k++)
    {
        int ny = y + dy[k];
        int nx = x + dx[k];
        
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
        if (visited[ny][nx]) continue;
        if (tb[ny][nx] == 0) continue;
        
        dfs(ny, nx);
    }
    return;
}





int main ()
{
    fill(&tb[0][0], &tb[0][0] + 104 * 104, 1);
    
    cin >> m >> n >> k;
    
    for (int i=0; i<k; i++)
    {
        for (int t=0; t<4; t++)
        {
            cin >> rec[t];
        }
        
        int width = rec[2] - rec[0];
        int height = rec[3] - rec[1];
        
        for (int i=m-rec[3]; i<m-rec[3] + height; i++)
        {
            for (int j=rec[0]; j<rec[0] + width; j++)
            {
                tb[i][j] = 0;
            }
        }
    }
    
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (visited[i][j] == 0 && tb[i][j] == 1)
            {
                dfs(i,j);
                result.push_back(sub_ret);
                sub_ret = 0;
                ret++;
            }
        }
    }
    cout << ret << "\n";

    sort(result.begin(), result.end());
    
    for (int a : result)
        cout << a << " ";
    
    
    return 0;
    
}