#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int numbers[9] = {};

    cin >> numbers[0];
    cin >> numbers[1];
    cin >> numbers[2];
    cin >> numbers[3];
    cin >> numbers[4];
    cin >> numbers[5];
    cin >> numbers[6];
    cin >> numbers[7];
    cin >> numbers[8];

    int max = numbers[0];
    int idx = 1;

    for (int i=0; i<8; i++)
    {

        if (numbers[i+1] > max)
        {
            max = numbers[i+1];
            idx = i+2;
        }
    }

    cout << max << "\n";
    cout << idx;

    return 0;
}