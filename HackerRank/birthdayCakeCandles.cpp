#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  	int n;
  	cin >> n;
  	int arr[n]; 
  	for (int i = 0; i < n; ++i)
  	{
  		cin >> arr[i];
  	}
  	sort(arr,arr+n);
  	reverse(arr,arr+n);
  	int j=0;
  	for (int i = 0; i < n; ++i)
  	{
  		if(arr[0]!=arr[i])
  			break;
  		j++;
  	}
  	cout << j;
  	return 0;
}
