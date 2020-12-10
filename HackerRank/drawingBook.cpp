#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
      int n;
      cin >> n;
      int p;
      cin >> p;
      int answer;
      if(p<=(n/2))
      {
          answer = p/2 ;
      }
      else if(n%2==0)
      {
          answer = (n-p+1)/2;
      }
      else if(n%2==1)
      {
          answer = (n-p)/2;
      }
      cout << answer;
      return 0;
}
