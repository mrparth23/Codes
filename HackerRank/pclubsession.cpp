#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int fun(int n) 
{
	// Base case
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1; 
	}

	//Induction Hypothesis
	int temp = (fun(n-1) + fun(n-2));
	return temp;
}

int main()
{
	cout << fun(7);
  	return 0;
}

