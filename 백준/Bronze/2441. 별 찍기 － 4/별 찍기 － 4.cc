#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num = 0;
    cin >> num;

    for (int i=0; i<num; i++)
    {
        for (int j=0; j<num; j++)
        {
            if (j > i-1)
            {
                cout << "*"; 
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}