#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#define mod 1000000007
const int INF = 1 << 29;
typedef long long int ll;

ll gcd(ll a, ll b)
{
    return (a % b == 0) ? abs(b) : gcd(b, a % b);
}

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, m;
    cin >> n >> m;

    vector<ll> v(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    string ans;
    bool flag;
    while (m--)
    {
        ll l, r;
        cin >> l >> r;
        ans = "N";
        flag = false;
        for (ll i = l; i < r; i++)
        {
            if (v[i] == 1)
            {
                ans = "S";
                break;
            }
            for (ll j = i + 1; j <= r; j++)
            {
                if ((v[j] == 1) || (__gcd(v[i], v[j]) == 1))
                {
                    ans = "S";
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
        cout << ans << endl;
    }
    return 0;
}