#include <bits/stdc++.h>
using namespace std;

int num;
int ret;
int a, b;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> num;
    
    for (int i=0; i<num; i++)
    {
        
        cin >> a >> b;
        
        ret = a + b;
        
        cout << ret << "\n";
        
        
    }
    
    
    
    return 0;
}