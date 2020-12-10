#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int n, count;
    while ( T-- )
    {
        cin >> n;
        count = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= count)
                count++;
        } 
        cout << count << endl;
    }
    return 0;
}

