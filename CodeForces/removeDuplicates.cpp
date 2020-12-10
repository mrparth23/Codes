#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = 0;
                break;
            }
        }
    }

    int count=0;
    for (int i = 0; i < n; i++)
        if(arr[i]!=0)
            count++;
    
    cout << count << endl;
    for (int i = 0; i < n; i++)
        if(arr[i]!=0)
            cout << arr[i] << " ";
    

    return 0;
}