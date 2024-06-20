#include <array>
#include <string>
#include <iostream>
using namespace std;

int cnt = 0;
int num;
array<int, 26> alpha = {0};
string name = "";

int main()
{
    cin >> num;
    
    for (int i=0; i< num; i++)
    {
        cin >> name;
        int first = int(name[0]) - 97;
        alpha[first] += 1;
        
        name = "";
        first = 0;
    }
    
    for (int i=0; i<alpha.size(); i++)
    {
        if (alpha[i] >=5)
        {
            break;
        }
        else
        {
            cnt++;
        }
    }
    
    if (cnt == 26)
    {
        cout << "PREDAJA";
        return 0;
    }
    
    

    for (int i=0; i<alpha.size(); i++)
    {
        
        if (alpha[i] >= 5) 
        {
            cout << (char)(i + 97);
        }
        
        
    }
    
    return 0;
}