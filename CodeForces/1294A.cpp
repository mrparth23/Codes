#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int t;
    cin >> t;

    while (t--)
    {
        long long int a, b, c, n;
        cin >> a >> b >> c >> n;
        long long int m = a;
        if (b >= m)
        {
            m = b;
        }
        if (c >= m)
        {
            m = c;
        }
        long long int sum = 0;
        sum += (m - a) + (m - b) + (m - c);
        if (n >= sum)
        {
            if ((n - sum) % 3 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
