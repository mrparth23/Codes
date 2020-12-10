#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
    
using namespace std;
  
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    long long int n;
    cin >> n;
    string s;
    int sum=0;
    for (long long int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "Tetrahedron")
            sum += 4;
        else if (s == "Cube")
            sum += 6;
        else if (s == "Octahedron")
            sum += 8;
        else if (s == "Dodecahedron")
            sum += 12;
        else if (s == "Icosahedron")
            sum += 20;
    }
    cout << sum << endl;
    
    return 0;
}