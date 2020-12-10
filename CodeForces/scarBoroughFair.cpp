#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    string s;
    getline(cin, s);
    getline(cin, s);

    for (int i = 1; i <= m; i++)
    {
        int l, r;
        cin >> l >> r;
        char c1, c2;
        cin >> c1 >> c2;

        for (int j = l - 1; j < r; j++)
            if (s[j] == c1)
                s[j] = c2;
    }
    cout << s << endl;

    return 0;
}