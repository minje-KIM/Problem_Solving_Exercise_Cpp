#include <array>
#include <iostream>
using namespace std;

array<int, 104> cost = {0};
int ca = 0;
int cb = 0;
int cc = 0;

int total_cost = 0;

int one = 0;
int two = 0;
int three = 0;

array<int, 2> ta = {};
array<int, 2> tb = {};
array<int, 2> tc = {};

int main()
{
    cin >> ca >> cb >> cc;
    
    cin >> ta[0] >> ta[1];
    cin >> tb[0] >> tb[1];
    cin >> tc[0] >> tc[1];
    
    for (int i=ta[0]-1; i<=ta[1]-2; i++)
    {
        cost[i] += 1;
    }
    for (int i=tb[0]-1; i<=tb[1]-2; i++)
    {
        cost[i] += 1;
    }
    for (int i=tc[0]-1; i<=tc[1]-2; i++)
    {
        cost[i] += 1;
    }
    
    
    for (int i=0; i < cost.size(); i++)
    {
        if (cost[i] == 1)
        {
            one += 1;
        }
        else if (cost[i] == 2)
        {
            two += 1;
        }
        else if (cost[i] == 3)
        {
            three += 1;
        }
    }

    total_cost = (ca * one * 1) + (cb * two * 2) + (cc * three * 3); 
    
    cout << total_cost;
    
    
    
    return 0;
}