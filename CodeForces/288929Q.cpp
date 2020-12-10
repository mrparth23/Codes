#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#define mod 1000000007
const int INF = 1 << 29;
typedef long long int ll;

ll max(ll a, ll b)
{
    if (a > b)
        return a;
    return b;
}
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, temp;
        cin >> n;
        map<ll, ll> value;
        while (n--)
        {
            cin >> temp;
            if (value[temp])
                value[temp]++;
            else
                value[temp] = 1;
        }

        ll ans = 0, max = 0, key1, key2;
        for (auto itr = value.begin(); itr != value.end();)
        {
            key1 = itr->first;
            ++itr;
            key2 = itr->first;
            max = value[key1];
            if (key1 + 1 == key2)
                max += value[key2];
            if (ans < max)
                ans = max;
        }
        cout << ans << endl;
    }
    return 0;
}