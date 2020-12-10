#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int nCr(int n, int r)
{
    if (r == 0)
        return 1;
    return (n * nCr(n - 1, r - 1)) / r;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    string s[n];
    int row[n], col[n];
    for (int i = 0; i < n; i++)
    {
        row[i] = 0;
        col[i] = 0;
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] == 'C')
                row[i] += 1;
        }
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i][j] == 'C')
                col[j] += 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        sum += nCr(row[i], 2) + nCr(col[i], 2);
    }

    cout << sum << endl;

    return 0;
}
