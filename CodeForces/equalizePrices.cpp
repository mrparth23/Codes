#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int q=0;
	int n,k,a;
	cin >> q;
	int ans,ans1,ans2;
	while(q--)
	{
		a=0;
		cin >> n;
		cin >> k;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(arr,arr+n);
		ans1 = abs(arr[n-1]-k);
		ans2 = abs(arr[0]+k);
		ans = max(ans1,ans2);
		for (int j = 0; j < n; j++)
		{
			if(abs(arr[j]-ans) > k)
				a++;
		}
		if(a==0)
			cout << ans << endl;
		else
			cout << -1 << endl;
	}
	return 0;
}