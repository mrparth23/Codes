#include <iostream>
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
        long long int n;
        cin >> n;
        string s = "";

        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            cin >> v[i].second;
        }
        sort(v.begin(), v.end());

        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i].second > v[i + 1].second)
            {
                cout << "NO" << endl;
                count++;
                break;
            }
        }
        if (count != 0)
            continue;

        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            x = v[i].first - x;
            y = v[i].second - y;
            while (x--)
                s.append("R");
            while (y--)
                s.append("U");
            x = v[i].first;
            y = v[i].second;
        }
        cout << "YES" << endl;
        cout << s << endl;
    }

    return 0;
}
