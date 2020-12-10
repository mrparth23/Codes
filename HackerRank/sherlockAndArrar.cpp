#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n, l = 0;
    cin >> n;
    int temp, prefixsum[n];
    cin >> prefixsum[0];
    for (int j = 1; j < n; j++) {
      cin >> temp;
      prefixsum[j] = prefixsum[j - 1] + temp;
    }
    if (n == 1)
      l++;
    else if (prefixsum[n - 1] - prefixsum[0] == 0)
      l++;
    else {
      for (int k = 1; k < n - 1; k++) {
        if (prefixsum[k - 1] == prefixsum[n - 1] - prefixsum[k])
          l++;
      }
    }
    if (l > 0)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
