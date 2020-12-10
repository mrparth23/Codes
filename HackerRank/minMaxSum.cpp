#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  	long long int arr[5];
  	for (int i = 0; i < 5; ++i)
  	{
  		cin >> arr[i];
  	}
  	sort(arr,arr+5);
  	long long int min=0,max=0;
  	for (int i = 0; i < 4; ++i)
  	{
  		min += arr[i];
  	}
  	for (int i = 1; i < 5; ++i)
  	{
  		max += arr[i];
  	}
  	cout << min << " " << max;
  	return 0;
}
