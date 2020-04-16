#include<bits/stdc++.h>
using namespace std;
int cutrod(int price[], int n)
{
   int val[n+1];
   val[0]=0;
   
   for(int i=1;i<=n;i++)
   {
     int maximum=INT_MIN;
     for(int j=1;j<=i;j++)
     {
        maximum=max(maximum, price[j] + val[i-j]);
     }
     val[i]=maximum;
   }
return val[n];
}

int main()
{
        int n;
	cout<<"Enter the length of the rod"<<endl;
	cin>>n;
	int price[n];
	cout<<"Enter the price of each piece"<<endl;
	for(int i=1;i<=n;i++)
		cin>>price[i];
	cout<<"The maximum obtainable value is : "<<cutrod(price,n)<<endl;
return 0;
}
/*
int n;
	cout<<"Enter the length of the rod"<<endl;
	cin>>n;
	int price[n];
	cout<<"Enter the price of each piece"<<endl;
	for(int i=0;i<n;i++)
		cin>>price[i];
	cout<<"The maximum obtainable value is : "<<cutRod(price,n)<<endl;
*/



