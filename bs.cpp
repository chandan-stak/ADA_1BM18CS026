#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
 int n;
 cout<<"Enter the total number of elements in the array"<<endl;
 cin>>n;
 
 int a[n];
 cout<<"Enter the array elements"<<endl;
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
 }
 
 sort(a,a+n);
 int k;
 cout<<"Enter the key to be searched"<<endl;
 cin>>k;

 int f=0;
 int l=n-1;
 int c=0;
 while(f<=l)
 {
  int m=(f+l)/2;
 
  if(k<a[m])
  {
   l=m-1;
  }
  else if(k==a[m])
  {
    int i=m;
    int j=m;
    while(a[i]==k)
    {
       
       i++;
    }
    int l1=(i-1);
    cout<<"last occurrence "<<l1<<endl;
    while(a[j]==k)
    {
     j--;
    }
    int f1=(j+1);
    cout<<"first occurrence "<<f1<<endl;
   
    c=(l1-f1)+1;    
    cout<<"Total count: "<<c<<endl;
    break;
  }
  else
  {
   f=m+1;
  }
 }
 if(f>l)
 cout<<-1<<endl;

return 0;
}
