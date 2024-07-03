#include <bits/stdc++.h>
using namespace std;

int mat[10][10];
int small = -10;
int i_new,j_new;


int main ()
{
    for (int i=0; i<9; i++)
    {
        for (int j=0; j<9; j++)
        {
            cin >> mat[i][j];
        }
    }
    
    for (int i=0; i<9; i++)
    {
        for (int j=0; j<9; j++)
        {
            if (mat[i][j] > small)
            {
                small = mat[i][j];
                i_new = i+1;
                j_new = j+1;
            }
        }
    }
    
    cout << small << "\n";
    cout << i_new << " " << j_new;
    return 0;
    
}