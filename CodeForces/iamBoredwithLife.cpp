#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long int fac(long long int a)
{
    long long int fac=1;
    for (long long int i = 1; i <=a; i++)
    {
        fac *= i;
    }
    return fac;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int a, b, c, d;
    cin >> a;
    cin >> b;
    if(a>b)
        cout << fac(b) << endl;
    else
        cout << fac(a) << endl;
    
    return 0;
}