#include <bits/stdc++.h> 
using namespace std;

int n, m;
deque<int> dq;
int temp;
int ret;
int mem;



int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
    
    for (int i=1; i<=n; i++)
    {
        dq.push_back(i);
    }
    
    for (int i=0; i<m; i++)
    {
        cin >> temp;
        
        int idx = find(dq.begin(), dq.end(), temp) - dq.begin();
        // cout << "idx" << idx << "\n";
        
        while (dq.front() != temp)
            {
                if (idx < dq.size() - idx)
                {
                    mem = dq.front();
                    dq.pop_front();
                    dq.push_back(mem); 
                }
                else 
                {
                    mem = dq.back();
                    dq.pop_back();
                    dq.push_front(mem);
                }
                ret++;
            }
            
        dq.pop_front();
        // cout << "curr front" << dq.front() << "\n";
        // cout << "curr ret" << ret << "\n";
    }

    cout << ret << "\n";
    
    return 0;
}