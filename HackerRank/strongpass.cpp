#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	char pass[n];
	int flag1=0,flag2=0,flag3=0,flag4=0,flag5=0;
	if(n>=6){
		flag1++;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> pass[i];
		for (int j = 0; j < 26; j++)
		{
			if((int)pass[i] == j+65){
				flag2++;
			}
			if((int)pass[i] == j+97){
				flag3++;
			}
		}
		for (int l = 0; l < 10; l++)
		{
			if(pass[i] == l+48) {
				flag4++;
			}
		}
		if(pass[i]==33 || pass[i]==34 || pass[i]==36 || pass[i]==37 || pass[i]==38 || pass[i]==40 || pass[i]==41 || pass[i]==42 || pass[i]==43 || pass[i]==64 || pass[i]==94 || pass[i]==45)
		{
			flag5++;
		}
	}
	int flag6=5;
	if(flag1>0)
		flag6--;
	if(flag2>0)
		flag6--;
	if(flag3>0)
		flag6--;
	if(flag4>0)
		flag6--;
	if(flag5>0)
		flag6--;
	printf("%d",flag6);
	return 0 ;
}