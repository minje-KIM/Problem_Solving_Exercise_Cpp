#include <iostream>
#include <string>
using namespace std;

string line = "";

int main()
{
    cin >> line;
    
    int div2 = line.length() / 2;
    

    for (int i=0; i<div2; i++)
    {

        if(line[i] != line[line.length()-1-i])
        {
            
            cout << "0" << "\n";
            return 0;
        }
    }
    
    cout << "1" << "\n";
    return 0;
}