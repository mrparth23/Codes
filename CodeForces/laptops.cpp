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

	long long int n;
	cin >> n;
	long long int x=0,y=0;
	while(n--) 
	{
		long long int a,b;
		cin >> a;
		cin >> b;
		if(a>b)
			x++;
		else
			y++;

	}
	if(x>0 && y>0)
		cout << "Happy Alex" << endl;
	else
		cout << "Poor Alex" << endl;
	return 0;
}
