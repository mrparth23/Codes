#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#define mod 1000000007
const int INF = 1 << 29;
typedef long long int ll;
typedef unsigned long long int ull;
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i, n) for (ll i = 0; i < (n); i++)
#define FOR(i, a, b) for (ll i = (a); i <= (b); i++)
#define FORD(i, a, b) for (ll i = (a); i >= (b); i--)
#define T(a) \
    ll a;    \
    cin >> a;
#define TT(t) \
    T(t);     \
    while (t--)
#define pb push_back
#define mp make_pair

ll gcd(ll a, ll b)
{
    return (a % b == 0) ? abs(b) : gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}
ll max(ll a, ll b)
{
    if (a > b)
        return a;
    return b;
}
ll power(ll x, ll y)
{
    ll res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = res * x;
        y = y >> 1;
        x = x * x;
    }
    return res;
}
ll powermod(ll x, ll y)
{
    ll res = 1;
    x = x % mod;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % mod;
        y = y >> 1;
        x = (x * x) % mod;
    }
    return res;
}
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if ((n % i == 0) || (n % (i + 2) == 0))
            return false;
    }
    return true;
}
ll nCr(ll n, ll r)
{
    if (r == 0)
        return 1;
    return (n * nCr(n - 1, r - 1)) / r;
}
ll countDivisors(ll n)
{
    ll cnt = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                cnt++;
            else
                cnt = cnt + 2;
        }
    }
    return cnt;
}
ll modulo(ll a, ll b)
{
    ll r = a % b;
    return r < 0 ? r + b : r;
}
ll bsearch_array(ll n, ll *arr, ll first, ll last)
{
    if (first == last)
    {
        if (arr[first] == n)
            return first + 1;
        else
            return -1;
    }
    else
    {
        ll m = (first + last) / 2;
        if (arr[m] == n)
            return m + 1;
        else
        {
            if (arr[m] < n)
                return bsearch_array(n, arr, m + 1, last);
            else
                return bsearch_array(n, arr, first, m);
        }
    }
}
ll bsearch_vect(std::vector<ll> &nums, int target)
{

    if (nums.size() == 0)
        return -1;

    int left = 0, right = nums.size() - 1;
    while (left < right)
    {
        ll mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
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
        ll n, k;
        cin >> n >> k;
        cout << (n + k - 1) << endl;
    }

    return 0;
}