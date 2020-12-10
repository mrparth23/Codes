#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long fun(long i)
{
	long num = 0;
	while (i > 0)
	{
		num += i % 10;
		i = i / 10;
	}
	return num;
}

int main()
{
	long i;
	int j = 0;
	cin >> i;
	while (j == 0)
	{
		if (fun(i) % 4 == 0)
		{
			cout << i << endl;
			j++;
		}
		else
			i++;
	}
	return 0;
}
