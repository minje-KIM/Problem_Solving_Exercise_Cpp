#include <bits/stdc++.h>
using namespace std;

int cnt[104];
int a, b, c;
int s, e;
int ret;

// 시작한 시간 / 끝난 시간 -> 이상 / 미만 으로 설정
// 카운팅 배열이 필요하다

int main ()
{
    cin >> a >> b >> c;
    
    for (int i=0; i<3; i++)
    {
        cin >> s >> e;
        for (int j=s; j<e; j++)
            cnt[j]++;
    }
    
    for (int i=0; i<100; i++)
    {
        if (cnt[i] == 1) ret +=(1*a);
        else if (cnt[i] == 2) ret += (2*b);
        else if (cnt[i] == 3) ret += (3*c);
        else continue;
    }
    
    cout << ret;
    return 0;
    
    
}