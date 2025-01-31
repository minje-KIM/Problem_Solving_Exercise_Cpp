#include <bits/stdc++.h>
using namespace std;

string s;
int temp;
int num[10];
int ret;

int temp2;


int main ()
{
    cin >> s;
    
    
    for (int i=0; i<s.length(); i++)
    {
        temp = s[i] - '0';
        num[temp]++;
    }
    
    // for (int i = 0; i< 10; i++)
    // {
    //     cout << num[i] << " ";
    // }
    // cout << "\n";
    
    if (num[6] >= 0 && num[9] >= 0)
    {
        num[6] += num[9];
        num[9] = 0;
    }
    
    if (num[6] % 2 == 0)
    {
        num[6] /= 2;
    }
    else
    {
        num[6] = num[6] / 2 + 1;
    }
    

    
    // for (int i = 0; i< 10; i++)
    // {
    //     cout << num[i] << " ";
    // }
    // cout << "\n";
    
    
    

    for (int i=0; i<10; i++)
    {
        ret = max(ret, num[i]);
    }
    
    
   cout << ret + temp2 << "\n";
    
    
    
    return 0;
    
}