#include <bits/stdc++.h>
using namespace std;



int visited[305][305];

int t_num;
int k;
int ret;
int y, x;
int start[2];
int target[2];

const int dx[] = {2,-2,-2,2,1,-1,-1,1};
const int dy[] = {1,-1,1,-1,2,-2,2,-2};



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> k;
    
    while(k--)
    {
        cin >> t_num;
        
        cin >> start[0] >> start[1];
        cin >> target[0] >> target[1];
        
        y = start[0]; 
        x = start[1];
        
        ret = 0;
        fill(&visited[0][0], &visited[0][0] + 305 * 305, 0);
        bool found = false;
        
        queue<pair<int, int>> q;
        
        visited[start[0]][start[1]] = 1;
        q.push({y,x});
        
        while(q.size() && !found)
        {
            // cout << "hello" << "\n";
            tie(y,x) = q.front();
            q.pop();
            
            for (int i=0; i<8; i++)
            {
                int ny = y + dy[i];
                int nx = x + dx[i];
                
                if (ny < 0 || ny >= t_num || nx < 0 || nx >= t_num) continue;
                if (visited[ny][nx] != 0) continue;
                
                if (ny == target[0] && nx == target[1])
                {
                    ret = visited[y][x];
                    found = true;
                    break;
                }
                
                // cout << ny << " " << nx << "\n";
                visited[ny][nx] = visited[y][x] + 1;
                q.push({ny, nx});
            }
            
        }
        
        cout << ret << "\n";

    }
    
    
    return 0;
}


