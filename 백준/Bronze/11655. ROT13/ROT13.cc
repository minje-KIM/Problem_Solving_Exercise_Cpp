#include <bits/stdc++.h>
using namespace std;


// 띄어쓰기를 포함한 문자열 => getline
string s;

int main ()
{
    getline(cin, s);
    
    for (int i=0; i<s.size(); i++)
    {
        // 대문자
        if (s[i] >= 65 && s[i] <=90)
        {
            if (s[i] + 13 > 90) s[i] = s[i] + 13 - 26;
            else s[i] += 13;
        }
        // 소문자
        else if (s[i] >= 97 && s[i] <= 122)
        {
            if (s[i] + 13 > 122) s[i] = s[i] + 13 - 26;
            else s[i] += 13;
        }
        else continue;
    }
    
    cout << s;
    return 0;
}