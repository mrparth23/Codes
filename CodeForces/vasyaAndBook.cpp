#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int t;
    cin >> t;

    long long int ans;
    while (t--)
    {
        long long int n, x, y, d;
        cin >> n >> x >> y >> d;

        if (abs(y - x) % d == 0)
            ans = abs(y - x) / d;
        else if ((y + x - 1) % d == 0)
            ans = (y + x - 1) / d;
        else if (1==1)
            ;
        else 
            ans = -1;

        cout << ans << endl;
    }

    return 0;
}