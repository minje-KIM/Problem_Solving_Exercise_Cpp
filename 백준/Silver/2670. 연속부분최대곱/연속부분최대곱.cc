#include <bits/stdc++.h>
using namespace std;


int n;
double a[10004];
double maxi =  -10.0;


int main ()
{
    cin >> n;
    
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for (int s=0; s<n; s++)
    {
        double sum = 1.0;
        for (int e=s; e<n; e++)
        {
            sum *= a[e];
            maxi = max(sum, maxi);
        }
    }

    cout << fixed << setprecision(3) <<  maxi << "\n";
    
}