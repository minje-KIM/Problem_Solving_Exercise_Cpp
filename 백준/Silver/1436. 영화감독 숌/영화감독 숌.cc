#include <bits/stdc++.h>
using namespace std;

int n;
string m = "666";

int cnt;
int s;

int main ()
{
    cin >> n;
    
    while (1)
    {

        if(cnt == n)
        {
            cout << s-1 << "\n";
            break;
        }
    
        string k = to_string(s);
        // cout << k << "\n";
        
        if (k.find(m) == string::npos)
        {
            
        }
        else
            cnt++;
            
        s++;
    }
    
}


