#include <bits/stdc++.h>
using namespace std;

string s;
int cnt[26];
int n;
string ret;

int main ()
{
    getline(cin , s);
    
    
    for (int i=0; i< s.size(); i++)
    {
        if (s[i] >= 65 && s[i] < 91)
        {
            if (s[i] + 13 > 90) s[i] = s[i] + 13 - 26;
            else s[i] = s[i] + 13;
        }
        else if (s[i] >= 97 && s[i] < 123)
        {
            if (s[i] + 13 > 122) s[i] = s[i] + 13 - 26;
            else s[i] = s[i] + 13;
        }
        
        cout << s[i];
    }
    

    return 0;
}



