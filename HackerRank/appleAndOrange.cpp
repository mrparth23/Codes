#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  	int s,t,a,b,m,n,temp1=0,temp2=0,count=0;
  	cin >> s ;
  	cin >> t;
  	cin >> a;
  	cin >> b;
  	cin >> m;
  	cin >> n;
  	int apple[m],orange[n];
  	for (int i = 0; i < m; ++i)
  	{
  		cin >> count;
  		apple[i] = a+count;
  		if(apple[i]>=s && apple[i]<=t)
  			temp1++; 
  	}
  	for (int i = 0; i < n; ++i)
  	{
  		cin >> count;
  		orange[i]=b+count;
  		if(orange[i]>=s && orange[i]<=t)
  			temp2++;
  	}
  	cout << temp1 << "\n" << temp2 ;

  	return 0;
}
