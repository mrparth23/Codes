#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		long a[n], b[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
		}


		long l = 0, r = n - 1;

		long k = 0;
		while (l < r)
		{
			while (a[l] % 2 != 0)
			{
				l++;
				k++;
			}
			while (a[r] % 2 == 0  && l < r)
				r--;
			if (l < r)
				swap(a[l], a[r]);
		}
		sort(a, a + k);
		sort(a + k, a + n);

		l = 0;
		r = n - 1;
		k = 0;
		while (l < r)
		{
			while (b[l] % 2 != 0)
			{
				l++;
				k++;
			}
			while (b[r] % 2 == 0  && l < r)
				r--;
			if (l < r)
				swap(b[l], b[r]);
		}
		sort(b, b + k);
		sort(b + k, b + n);

		long sum = 0;
		for (long i = 0; i < n; i++)
		{
			sum += ((a[i] + b[i]) / 2);
		}
		cout << sum << endl;
	}
	return 0;
} 	

