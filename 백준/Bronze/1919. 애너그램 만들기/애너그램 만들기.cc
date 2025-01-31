#include <bits/stdc++.h>
using namespace std;

int alpha1[26];
int alpha2[26];
int ret;
string a, b;

int main ()
{
    cin >> a >> b;
    
    for (int i=0; i<a.length(); i++)
    {
        int temp = a[i] - 'a';
        alpha1[temp]++;
    }
    
    for (int i=0; i<b.length(); i++)
    {
        int temp = b[i] - 'a';
        alpha2[temp]++;
    }        

    for (int i=0; i<26; i++)
    {
        if (alpha1[i] != alpha2[i])
        {
            ret = ret + abs(alpha2[i] - alpha1[i]);
        }
    }
    
    cout << ret << "\n";


    
    return 0;
}