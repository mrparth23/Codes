#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int q;
	cin >> q;
	int k, n, a, b, t, ans, j;
	while (q--)
	{
		t = 0;
		j = 0;
		cin >> k;
		cin >> n;
		cin >> a;
		cin >> b;
		while (j == 0)
		{
			if (k > a)
			{
				t++;
				k -= a;
			}
			else if (k > b)
			{
				k -= b;
				if (k <= b)
				{
					ans = t;
					j++;
				}
			}
			else if (k <= b)
			{
				if (t < n && k - b <= 0)
					ans = -1;
				else
					ans = t;
				j++;
			}
			else
			{
				ans = -1;
				j++;
			}
		}
		if (t > n)
			ans = n;
		cout << ans << endl;
	}
	return 0;
}