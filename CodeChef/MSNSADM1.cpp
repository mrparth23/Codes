#include <iostream>
#include <bits/stdc++.h>
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
		long long int n;
		cin >> n;
		long long int a[n], b[n];
		for (long long int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (long long int i = 0; i < n; i++)
		{
			cin >> b[i];
		}
		for (long long int i = 0; i < n; i++)
		{
			a[i] = (a[i] * 20) - (b[i] * 10);
			if (a[i] < 0)
				a[i] = 0;
		}
		sort(a, a + n);
		cout << a[n - 1] << endl;
	}

	return 0;
}
