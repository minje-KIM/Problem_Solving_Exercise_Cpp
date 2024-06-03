#include <iostream>

using namespace std;

int main()
{
    
    string input_alpha;
    cin >> input_alpha;
    
    string full_alpha;
    int result_alpha[27] = {0};

    char a = 'a';

    for (int k=0; k<input_alpha.size(); k++)
        for(int idx=0; idx<26; idx++)
        {
            if (a+idx == input_alpha[k])
                {
                    result_alpha[idx] += 1;
                }
        }
        
    
    int nLen = sizeof(result_alpha) / sizeof(int);
    
    for (int i=0; i<nLen-1; i++)
    {
        cout << result_alpha[i] << " ";
        
    }
    
    

    
    return 0;
}