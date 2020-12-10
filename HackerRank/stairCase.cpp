#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  	int n;
  	cin >> n;
  	int i,j,k,l;
  	for (i = 0; i < n; i++)
  	{
  		for (j = i; j < n-1; j++)
  		{
  			cout << " ";
  		}
  		for (k = 0; k < i+1; k++)
  		{
  			cout << "#";
  		}
  		cout << "\n";
  	}
  	return 0;
}
