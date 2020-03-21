#include<bits/stdc++.h>
using namespace std;
float mergemedian(int a1[],int a2[],int n);
float median(int arr[],int n);
int main()
{
  int n;
  cout<<"Enter the size of the arrays:"<<endl;
  cin>>n;
  int a1[n],a2[n];
  cout<<"Enter the elements of the first array in ascending order\n";
	for(int i=0;i<n;i++)
		cin>>a1[i];
	cout<<"Enter the elements of the second array in ascending order\n";
	for(int i=0;i<n;i++)
		cin>>a2[i];
  float med= mergemedian(a1,a2,n);
  cout<<"\nThe median of the merged array :"<<med<<endl;
  
  return 0;
}

float mergemedian(int a1[],int a2[],int n)
{
  float m1,m2;
  if(n<=0)
    return -1;
  
  if(n==1)
    return (float)(a1[0]+a2[0])/2;
  
  if(n==2)
    return (float)(max(a1[0],a2[0]) + min(a1[1],a2[1])) /2;
  
   m1=median(a1,n);
   m2=median(a2,n);
  
  if(m1==m2)
     return m1;
  
  if(m1<m2)
  {
    if(n%2 ==0)
       return mergemedian(a1 + n/2-1,a2,n-n/2+1);
    
    return mergemedian(a1 + n/2,a2, n-n/2);
  }
  
  if(n%2 == 0)
     return mergemedian(a2 + n/2-1 ,a1, n-n/2-1);

  return mergemedian(a2 + n/2,a1, n-n/2);

}

float median(int arr[], int n)
{
  if(n%2==0)
    return (arr[n/2] + arr[n/2-1]) / 2;
   
   return arr[n/2];
}
   






















