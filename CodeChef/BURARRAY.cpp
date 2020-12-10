#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T, t;
	cin >> T;
	int s, N, Q , y, p, q;
	while (T--)
	{
		cin >> N;
		cin >> Q;
		s = 0;
		int arr[N + 1];
		for (int i = 0; i <= N; i++)
		{
			arr[i] = i ;
		}
		while (Q--)
		{
			cin >> t;
			if (t == 1)
			{
				cin >> y;
				arr[y + s] = 0;
			}
			else if (t == 2)
			{
				cin >> p;
				cin >> q;
				p += s  ;
				q += s + 1;
				int* max;
				max = std::max_element(arr + p, arr + q);
				s = (s + *max) % N;
				cout << *max << endl;
			}
		}


	}
	return 0;
}
