#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    long N, temp;
    for ( int  i = 0; i < T; i++ )
    {
        cin >> N;
        temp = (( long )sqrt ( 1 + 8 * N )  - 1) / 2;
        cout << temp << "\n";
    }
    return 0;
}
