#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a[2];
    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> temp;
            if (temp == 1)
            {
                a[0] = j+1;
                a[1] = i+1;
            }
        }
    }

    a[0] = abs(3-a[0]);
    a[1] = abs(3-a[1]);
    cout << a[0] + a[1] << endl;

    return 0;
}