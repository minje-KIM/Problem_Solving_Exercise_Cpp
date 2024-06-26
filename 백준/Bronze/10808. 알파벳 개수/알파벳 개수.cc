#include <bits/stdc++.h>
using namespace std;

string name;
int cnt[26];


// 단어가 몇개? -> counting 하는 문제 -> 맵 또는 배열 활용
// 문자는 숫자로 치환 가능함

int main ()
{
    cin >> name;
    
    for (char a : name)
    {
        cnt[a - 'a']++;
    }
    
    for (int i=0; i<26; i++)
    {
        cout << cnt[i] << " ";
    }
    return 0;
}
