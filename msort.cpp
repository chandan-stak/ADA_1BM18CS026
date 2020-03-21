#include<bits/stdc++.h>
using namespace std;
void merge(int low,int mid,int high,int a[]);
void mergesort(int low,int high,int a[]);
int main()
{
  int n,i,low,high;
  clock_t time;
  cout<<"Enter the number of elements\n";
  cin>>n;
  int a[n];
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
  mergesort(low,high,a);
  time=clock()-time;
  cout<<"\nThe time for merge sort is "<<fixed<<setprecision(7)<<(float)time/CLOCKS_PER_SEC<<"\n";
cout<<"\nThe sorted array is\n";
for(i=0;i<n;i++)
  cout<<a[i]<<" ";
cout<<endl;
return 0;
}
void mergesort(int low,int high,int a[])
{
  int mid;
  if(low<high)
  {
     mid=(int)(low+high)/2;
     mergesort(low,mid,a);
     mergesort(mid+1,high,a);
     merge(low,mid,high,a);
  }           
}
void merge(int low,int mid,int high,int a[])
{
  int i=low;
  int j=mid+1;
  int k=low;
  int c[200];
  
  while(i<=mid && j<=high)
  {
     if(a[i]<a[j])
     {
        c[k]=a[i];
        k++;
        i++;
     }
     else
     {
       c[k]=a[j];
       k++;
       j++;
     }
   }
   while(i<=mid)
   {
       c[k]=a[i];
       k++;
       i++;
   }  
  while(j<=high)
  {
      c[k]=a[j];
      k++;
      j++;
  }
  for(i=low;i<=high;i++)
     a[i]=c[i];
}
/*
Enter the number of elements
100
Enter the elements
383 886 777 915 793 335 386 492 649 421 362 27 690 59 763 926 540 426 172 736 211 368 567 429 782 530 862 123 67 135 929 802 22 58 69 167 393 456 11 42 229 373 421 919 784 537 198 324 315 370 413 526 91 980 956 873 862 170 996 281 305 925 84 327 336 505 846 729 313 857 124 895 582 545 814 367 434 364 43 750 87 808 276 178 788 584 403 651 754 399 932 60 676 368 739 12 226 586 94 539 

The time for merge sort is 0.0000220

The sorted array is
11 12 22 27 42 43 58 59 60 67 69 84 87 91 94 123 124 135 167 170 172 178 198 211 226 229 276 281 305 313 315 324 327 335 336 362 364 367 368 368 370 373 383 386 393 399 403 413 421 421 426 429 434 456 492 505 526 530 537 539 540 545 567 582 584 586 649 651 676 690 729 736 739 750 754 763 777 782 784 788 793 802 808 814 846 857 862 862 873 886 895 915 919 925 926 929 932 956 980 996 
*/







