#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int ans = 0, temp = 0;
		int a = 0, b = 0, c = 0;
		while (n--)
		{
			cin >> temp;
			if (temp % 3 == 0)
				a++;
			else if (temp % 3 == 1)
				b++;
			else if (temp % 3 == 2)
				c++;
		}
		ans = a + min(b, c) + abs(b-c)/3;
		cout << ans << endl;
	}
	return 0;
}
