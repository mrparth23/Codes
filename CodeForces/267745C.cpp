#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    return (a % b == 0) ? abs(b) : gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (gcd(a, b) == 1)
            cout << "Finite" << endl;
        else
            cout << "Infinite" << endl;
    }
    return 0;
}
