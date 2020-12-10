#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, k;
        cin >> a >> b >> k;
        
        long long int jump = (k / 2) * (a - b);
        if (k % 2 == 1)
            jump += + a;
        
        cout << jump << endl;
        
    }

    return 0;
}