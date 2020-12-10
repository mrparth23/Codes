#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int temp;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
    }
    temp = 0;
    for (int i = 1; i <= 5; i++)
        if ((sum + i) % (n + 1) == 1)
            temp++;

    cout << 5 - temp << endl;

    return 0;
}