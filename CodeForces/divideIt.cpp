#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long  n;
		int ans = 0, temp = 0, x = 0;
		cin >> n;
		while (x == 0)
		{
			if (n % 2 == 0)
			{
				n /= 2;
				temp++;
			}
			else if (n % 3 == 0)
			{
				n = (n * 2) / 3;
				temp++;
			}
			else if (n % 5 == 0)
			{
				n = (n * 4) / 5;
				temp++;
			}
			else
			{
				x++;
				ans = -1;
			}
			if (n == 1)
			{
				ans = temp;
				x++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
