#include <bits/stdc++.h> 
using namespace std;

int num;
int ret;
int ts[10004];
int m, y;


int main ()
{
    
    cin >> num;
    
    for (int i=0; i<num; i++)
    {
        cin >> ts[i];
        
        y += (((ts[i] / 30) + 1) * 10);
        m += (((ts[i] / 60) + 1) * 15);
    }
    
    // cout << y << m << "\n";
    
    if (y > m)
        cout << "M" << " " << m << "\n";
    else if (y == m)
        cout << "Y" << " " << "M" << " " << y;
    else if (y < m)
        cout << "Y" << " " << y << "\n";

    return 0;
}