#include <bits/stdc++.h>
using namespace std;

string a, b;


int main ()
{
    cin >> a;
    b = a;
    
    reverse(b.begin(), b.end());
    
    if (a == b) cout << 1 << "\n";
    else cout << 0 << "\n";
    
    return 0;
}

