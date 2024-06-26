#include <bits/stdc++.h>
using namespace std;

string temp = "";

// 최대 정수의 크기가 100 -> 그보다 크게 104
int miro[104][104];
int visited[104][104];

int N;
int M;

int y, x;

const int dy[] = {0, -1, 0, 1};
const int dx[] = {1, 0, -1, 0};


int main ()
{
    //최소의 칸 수 -> 최단경로 문제 -> BFS로 풀이
    // 지도 기반의 입력 -> 지도를 만들어 풀이
    
    //붙어서 들어오는 입력 -> string 으로 처리
    
    cin >> N >> M;
    
    for (int i=0; i<N; i++)
    {
        cin >> temp;
        for (int j=0; j<M; j++)
        {
            miro[i][j] = temp[j] - '0';
        }
    }
    
    // bfs 구현
    
    queue<pair<int, int>> q;
    visited[0][0] = 1;
    q.push({0, 0});
    
    while(q.size())
    {
        tie(y, x) = q.front(); 
        q.pop();
        
        for (int i=0; i<4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            if (nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
            if (miro[ny][nx] == 0) continue;
            if (visited[ny][nx]) continue;
            
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
            
        }
    }
    
    cout << visited[N-1][M-1];    
    return 0;
}