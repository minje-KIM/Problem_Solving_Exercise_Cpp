#include <bits/stdc++.h>
using namespace std;

string s;
int cnt[26];
int n;
string ret;

int main ()
{
    cin >> n;
    
    for (int i=0; i<n; i++)
    {
        cin >> s;
        cnt[s[0] - 97]++;
    }
    
    for (int i=0; i<26; i++)
    {
        if (cnt[i] >=5) ret += i + 97;
    }
    
    if (ret.size()) cout << ret << "\n";
    else cout << "PREDAJA" << "\n";
    
    return 0;
}



