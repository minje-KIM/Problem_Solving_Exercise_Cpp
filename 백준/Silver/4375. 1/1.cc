#include <bits/stdc++.h>
using namespace std;

int num;

int main ()
{
    while(scanf("%d", &num) != EOF)
    {
        int cnt = 1, ret = 1;
        
        while(1)
        {
            if (cnt % num == 0)
            {
                printf("%d\n", ret);
                break;
            }
            else
            {
                cnt = (cnt % num * 10 % num) + 1;
				cnt %= num; 
                ret++;
            }
        }
    }
}