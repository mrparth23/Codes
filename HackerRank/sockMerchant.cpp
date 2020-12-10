#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
       cin >> n;
       int i,j;
       int arr[n];
       for (i = 0; i < n; i++)
       {
           cin >> arr[i];
       }
       int temp=0;
       for (i = 0; i < n; i++)
       {
           for (j = i+1; j < n; j++)
           {
           		if(arr[i]==0) {
              	 	if(arr[i]==arr[j]) {
                  	 temp++;
                  	 arr[j]=0;
                   	 break;
               		}
           		}
           }
       }
       cout << temp;
      return 0;
}

