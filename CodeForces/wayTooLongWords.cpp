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
    while (t--)
    {
        string s;
        cin >> s;
        if(s.size()>10)
            cout << s[0] << s.size()-2 << s[s.size()-1] << endl;
        else
            cout << s << endl;
        
    }
    return 0;
}   