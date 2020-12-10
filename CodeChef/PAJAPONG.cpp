#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T,x,y,k;
	int s=0;
	cin >> T;
	while(T--) 
	{
	 	cin >> x;
	 	cin >> y;
	 	cin >> k;
	 	s =x+y;
	 	if((s/k)%2==0)
	 		cout << "Chef" << endl;
	 	else if((s/k)%2==1)
	 		cout << "Paja" << endl;
	}
	return 0;
}
