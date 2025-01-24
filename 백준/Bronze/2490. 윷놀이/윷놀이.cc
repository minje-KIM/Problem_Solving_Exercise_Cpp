#include <bits/stdc++.h>
using namespace std;

int yuts[4];
int temp;
int num[2];

int main ()
{
    for (int i=0; i<3; i++)
    {
        fill(&num[0], &num[0] + 2, 0);
        
        for (int j=0; j<4; j++)
        {
            cin >> temp;
            // cout << "temp" << temp << "\n";
            if (temp == 0)
                num[0]++;
            else if (temp == 1)
                num[1]++;
                
            // cout << num[0] << num[1] << "\n";
        }
        
        if (num[0] == 1  && num[1] == 3)
        {
            cout << "A" << '\n';
        }
        else if (num[0] == 2 && num[1] == 2)
        {
            cout << "B" << "\n";
        }
         else if (num[0] == 3  && num[1] == 1)
        {
            cout << "C" << "\n";
        }
        else if (num[0] == 4 && num[1] == 0)
        {
            cout << "D" << "\n";
        }
        else if (num[0] == 0 && num[1] == 4)
        {
            cout << "E" << "\n";
        }
        else
        {
            cout << "hello" << '\n';
        }
    } 
        
    return 0;
}