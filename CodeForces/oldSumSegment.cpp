#include <iostream>
#include <bits/stdc++.h>
#define mod 1000000007
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long int t;
	cin >> t;
	while (t--)
	{
		long long int n, k;
		cin >> n;
		cin >> k;
		long long int arr[n];
		for (long long int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		long long int a[n], b[n], c[k];
		long long int q = 0, w = 0, e = 0;
		for (long long int i = 0; i < n; i++)
		{
			if (arr[i] % 2 == 0)
			{
				b[w] = arr[i];
				w++;
			}
			else if (arr[i] % 2 == 1)
			{
				a[q] = arr[i];
				q++;
				if (e < k - 1)
				{
					c[e] = i + 1;
					e++;
				}
				else if (e = k - 1)
				{
					c[e] = n;
				}

			}
		}
		if (q >= k)
		{
			cout << "YES" << endl;
			for (long long int i = 0; i < k; i++)
			{
				cout << c[i] << " ";
			}
			cout << "\n" << endl;
		}
		else
			cout << "NO" << endl;

	}
	return 0;
}
