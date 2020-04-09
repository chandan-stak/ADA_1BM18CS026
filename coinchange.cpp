#include<bits/stdc++.h>
using namespace std;
void mincoins(int n);
int main()
{
   int a;
	cout<<"Enter the amount for which change is to be found\n";
	cin>>a;
	if(a>0)
	{
		cout<<"\nFollowing are the coins exchanged for "<<a<<"\n";
		mincoins(a);
	}
	else
		cout<<"\nInvalid amount";
	cout<<endl;
	return 0;

}
void mincoins(int a)
{
  int deno[]={1,2,5,10,20,50,100,200,500,2000};
  int n=(int)sizeof(deno)/sizeof(deno[0]);
  vector<int> coins;
  for(int i=n-1;i>=0;i--)
  {
     while(a>=deno[i])
     {
        a-=deno[i];
        coins.push_back(deno[i]);
     }
  }
  for(int i=0; i<coins.size() ;i++)
       cout<<coins[i]<<" ";
}
/*
Enter the amount for which change is to be found
933

Following are the coins exchanged for 933
500 200 200 20 10 2 1 
*/
