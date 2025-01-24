#include <bits/stdc++.h> 
using namespace std;

int num;

int main ()
{
    
    cin >> num;
    
    int j = ((num-1) * 2) + 1;
    
    for (int i=0; i<num; i++)
    {
        int mid = (j/2) + 1;
        
        for (int k=0; k<j; k++)
        {
            int c = (mid-1)-i;
            int d = (mid-1)+i;
            
            if (k < c)
                cout << " ";
            else if (k > d)
                continue;
            else
                cout << "*";
        }
        cout << "\n";
    }
    
    return 0;
}