#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
      int x1,x2,v1,v2,max,min,k=0;
      cin >> x1;
      cin >> v1;
      cin >> x2;
      cin >> v2;
      if(v2>=v1)
      {
          cout << "NO";
      }
      else if(v1>v2)
      {
          while(x2>=x1)
          {
              if(x1==x2)
              {
                  k++;
                  break;
              }
              x1 += v1;
              x2 += v2;
          }
          if(k>0)
              cout << "YES";
          else
              cout << "NO";
      }
      return 0;
}
