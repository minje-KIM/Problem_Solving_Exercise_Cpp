#include <bits/stdc++.h>
using namespace std;


int a;


int main ()
{
    cin >> a;
    
    if (a % 4 == 0 && a % 100 != 0)
    {
        cout << "1" << "\n";
    }
    else if (a % 400 == 0)
    {
        cout << "1" << "\n";
    }
    else
    {
        cout << "0" << "\n";
    }
    
    return 0;
}