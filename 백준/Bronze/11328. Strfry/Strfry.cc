#include <bits/stdc++.h>
using namespace std;

int num;
int alpha1[26];
int alpha2[26];
int ret;
string a, b;

int main ()
{
    cin >> num;
    
    for (int i=0; i<num; i++)
    {
        ret = 0;
        fill(&alpha1[0], &alpha1[0] + 26, 0);
        fill(&alpha2[0], &alpha2[0] + 26, 0);

        cin >> a >> b;
        
        for (int i=0; i<a.length(); i++)
        {
            int temp = a[i] - 'a';
            alpha1[temp]++;
        }
        
        for (int i=0; i<b.length(); i++)
        {
            int temp = b[i] - 'a';
            alpha2[temp]++;
        }        


        
        for (int i=0; i<26; i++)
        {
            if (alpha1[i] != alpha2[i])
            {
                ret++;
            }
        }
        
        if (ret > 0)
            cout << "Impossible" << '\n'; 
        else
            cout << "Possible" << "\n";

    }
    
    return 0;
}