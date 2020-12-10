#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n, count, temp;
    cin >> n;
    for ( int i = 0; i < n; i++ )
    {
        cin >> temp;
        count = 0;
        if ( temp == 1 )
        {
            cout << "no\n" ;
        }
        else
        {
            for ( int j = 2; j < temp; j++ )
            {
                if ( temp % j == 0 )
                {
                    cout << "no\n";
                    count++;
                    break;
                }
            }
            if ( count == 0 )
            {
                cout << "yes\n";
            }
        }
    }
    return 0;
}
