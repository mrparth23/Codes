#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
      int n;
      cin >> n;
      char line;
      int arr[n];
      for (int i = 0; i < n; i++)
      {
          arr[i]=0;
          cin >> line;
          if(line=='U'){
              arr[i]=1;
          } 
          else if(line=='D') {
              arr[i]=-1;
          }
      }
      int temp=0,count=0;
      for (int i = 0; i < n; i++)
      {
          if(temp==0) 
          {
              if(arr[i]==-1)
              {
                  count++;
              }
          }
          temp += arr[i];
      }
      cout << count;
      return 0;
}
