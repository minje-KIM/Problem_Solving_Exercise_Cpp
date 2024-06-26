#include <bits/stdc++.h>
using namespace std;

int a, b;
double a1, b1;
double ret;

int main ()
{
    cin >> a >> b;
    
    a1 = (double)a;
    b1 = (double)b;
    
    ret = a1 / b1;
    
    cout.precision(15);
    cout << ret;
    return 0;
    
}