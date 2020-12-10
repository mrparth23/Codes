#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define mod 1000000007
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long int t;
	cin >> t;
	while(t--)
	{
		long long int n;
		cin >> n;
		unsigned long long int arr[n];
		unsigned long long int sum=0;
		for (long long int i = 0; i < n; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		
		long double avg = sum/(double)n;
		for (long long int i = 0; i < n; i++)
		{
			if((long double) arr[i]==avg)
			{
				cout << i+1 << endl;
				break;
			}
			if(i==n-1)
				cout << "Impossible" << endl;
		}

	}
	return 0;
}
		