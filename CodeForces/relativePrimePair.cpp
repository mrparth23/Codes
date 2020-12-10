#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int l, r;
    cin >> l >> r;
    if (l >= r)
        cout << "No" << endl;
    else
    {
        cout << "YES" << endl;
        for (long long int i = l; i < r; i += 2)
        {
            cout << i << " " << i + 1 << endl;
        }
    }

    return 0;
}