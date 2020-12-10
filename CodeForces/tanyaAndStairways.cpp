#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int count = 0;
    vector<int> v;

    int arr[n+1];
    arr[n] = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[i+1])
        {
            count++;
            v.push_back(arr[i]);
        }
    }

    cout << count << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v.at(i) << " ";

    return 0;
}