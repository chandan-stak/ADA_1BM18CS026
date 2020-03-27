#include<bits/stdc++.h>
using namespace std;
int partition(int low,int high,int a[]);
void quicksort(int low,int high,int a[]);
int main()
{
  int n,a[1000],i,low,high;
  clock_t time;
  cout<<"Enter the number of elements \n";
  cin>>n;
  cout<<"Enter the elements\n";
  for(i=0;i<n;i++)
  {
    a[i]=rand()%1000; 
    cout<<a[i]<<" ";
  }
  cout<<endl;
  low=0;
  high=n-1;
  time=clock();
  quicksort(low,high,a);
  time=clock()-time;
  cout<<"\nThe time required for quick sort is "<<fixed<<setprecision(7)<<(float)time/CLOCKS_PER_SEC<<"\n";
	cout<<"\nThe sorted array is\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
return 0;
}
void quicksort(int low,int high,int a[])
{
    int j;
   if(low<high)
   { 
    j=partition(low,high,a);
    quicksort(low,j-1,a);
    quicksort(j+1,high,a);
   }   
}
int partition(int low,int high,int a[])
{
   int i,j,pivot;
   i=low;
   j=high+1;
   pivot=a[low];
   while(i<j)
   {
     do
     {
      i+=1;
     }while(a[i]<=pivot);
     
     do
     {
       j-=1;
     }while(a[j]>pivot);
     
     if(i<j)
        swap(a[i],a[j]);   
   }
   swap(a[low],a[j]);
   return j;
}
/*
Enter the number of elements 
10
Enter the elements
383 886 777 915 793 335 386 492 649 421 

The time required for quick sort is 0.0000020

The sorted array is
335 383 386 421 492 649 777 793 886 915 
*/






