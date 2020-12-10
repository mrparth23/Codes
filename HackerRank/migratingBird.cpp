#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
      int n;c
      cin >> n;
      int temp;
      int bird[6]={0};
      for (int i = 0; i < n; i++)
      {
          cin >> temp;
          bird[temp]++;
      }
      int max = bird[5];
      int answer=0;
      for(int i=5;i >= 0; i--)
      {
          if(bird[i] >= max)
          {
              answer = i;
              max=bird[i];
          }
      }
      cout << answer;
     return 0;
}
