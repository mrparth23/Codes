#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  	int n;
  	cin >> n;
  	int arr[n];
  	for (int i = 0; i < n; i++)
  	{
  		cin >> arr[i];
  	}
  	int sum[n], j=0;
  	sort(arr,arr+n);
  	reverse(arr,arr+n);
  	for (int i = 0; i < n-2; i++)
  	{
  		if(arr[i]< arr[i+1]+ arr[i+2] )
  		{
  			cout << arr[i+2] << " " << arr[i+1] << " " << arr[i];
  			j++;
  			break;
  		}
  	}
  	if(j==0)
  		cout << "-1";

  	return 0;
}
