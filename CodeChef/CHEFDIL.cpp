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

	int a=0;
	long long int t;
	cin >> t;
	while (t--) 
	{				
		string s;
		cin >> s;
		for (int i = 0; i < s.length(); i++)
		{
			if(s[i]=='1') 
			{
				if(s[i+1]=='1') 
				{
					cout << "LOSE" << endl;
					a++;
					break;
				}
			}
		}
		if(a==0)
			cout << "WIN" << endl;

	}
	return 0;
}
