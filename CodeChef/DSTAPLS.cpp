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

		unsigned long long int n, k;
		cin >> n;
		cin >> k;
		if ((n / k) % k == 0)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}

	return 0;
}



