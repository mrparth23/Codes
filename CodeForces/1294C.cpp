#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long int> divisor(long long int n)
{
    vector<long long int> v;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            v.push_back(i);
    return v;
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
        long long int n;
        cin >> n;
        int temp = 0;
        vector<long long int> v = divisor(n);
        for (int i = 0; i < v.size() - 2; i++)
        {
            for (int j = i + 1; j < v.size() - 1; j++)
            {
                for (int k = j + 1; k < v.size(); k++)
                {
                    if (v[i] * v[j] == (n / v[k]))
                    {
                        cout << "YES" << endl;
                        cout << v[i] << " " << v[j] << " " << v[k];
                        temp++;
                        goto P;
                    }
                }
            }
        }
    P:
        if (temp > 0)
            continue;
        cout << "NO" << endl;
    }

    return 0;
}
