#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  	int n;
  	cin >> n;
  	int score[n];
  	score[0] = 0;
  	cin >> score[0];
  	int max = score[0];
  	int min = score[0];
  	int increase=0, decrease=0;
  	for (int i = 1; i < n; i++)
  	{
  		cin >> score[i];
  		if(score[i] > max)
  		{
  			max = score[i];
  			increase++;
  		}
  		if(score[i] < min)
  		{
  			min=score[i];
  			decrease++;
  		}
  	
  	}
  	cout << increase << " " << decrease;

  	return 0;
}
					