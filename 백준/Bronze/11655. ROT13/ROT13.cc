#include <array>
#include <string>
#include <iostream>
using namespace std;

string alpha = "";

int main ()
{
    getline(cin, alpha);
    
    for (int i=0; i < alpha.length(); i++)
    {

        int target = int(alpha[i]);
        
        if (target >=65 && target <= 90)
        {
            target += 13;
            if (target > 90)
            {
                target -= 26;
            }
        }
        else if (target >= 97 && target <=122)
        {
            target += 13;
            if (target > 122)
            {
                target -= 26;
            }
        }
        alpha[i] = target;
        
        target = 0;
    }
    
    cout << alpha << "\n";
    
    return 0;
}
