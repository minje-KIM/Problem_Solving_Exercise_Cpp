#include <bits/stdc++.h>
using namespace std;

string name;
int cnt[26];
int num;
string ret;

// 카운팅 문제 -> 맵 또는 배열 

int main ()
{
    cin >> num;
    
    for (int i=0; i<num; i++)
    {
        cin >> name;
        
        cnt[name[0] - 'a']++;
    }
    
    for (int i=0; i<26; i++)
    {
        if (cnt[i] >= 5)
        {
            ret += i + 'a';
        }
    }
    
    if (ret.size()) cout << ret;
    else cout << "PREDAJA";
    return 0;
    
}


