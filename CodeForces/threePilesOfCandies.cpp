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

	int t;
	cin >> t;
	while (t--)
	{
		long long int a, b, c;
		cin >> a;
		cin >> b;
		cin >> c;
		long long int sum = 0;
		sum += a + b + c;
		long long int ans = sum/2;
		cout << ans << endl;
	}
	return 0;
}
