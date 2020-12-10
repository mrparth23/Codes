#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    int arr[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '{' || s[i] == ' ' || s[i] == ',')
            continue;
        else if (s[i] == '}')
            break;
        else
            arr[int(s[i] - 'a')]++;
    }

    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
            count++;
    }

    cout << count << endl;
    return 0;
}