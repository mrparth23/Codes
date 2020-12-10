#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s, t ;
    cin >> s;
    cin >> t;

    int x = min(s.length(),t.length());
    int y = s.length() + t.length() ;

    
    for (int i = 0; i < x; i++)
    {
        if(s[s.length()-1-i]==t[t.length()-1-i])
            y -=2;
        else 
            break;
    }
    cout << y << endl;
    
    return 0;
}