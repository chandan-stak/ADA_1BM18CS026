#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cout<<"Enter the value of n:"<<endl;
 cin>>n;
 
 int a[n];
 cout<<"Enter the array elements :"<<endl;

 for(int i=0;i<n;i++)
 {
  cin>>a[i];
 }
 
 int pos;
 clock_t time_req; 
 time_req = clock();
 for(int i=0;i<n-1;i++)
 {
    pos=i;
  for(int j=i+1;j<n;j++)
  {
    if(a[j]<a[pos])
    {
     pos=j;
    }
  }
  int t=a[i];
         a[i]=a[pos];
         a[pos]=t;
 }
 time_req = clock()- time_req; 
 cout<<"Sorted Elements :"<<endl;
 for(int i=0;i<n;i++)
 {
  cout<<a[i]<<" "<<endl;;
 }
 cout << "Processor time taken for Selection sort: "<<fixed<<setprecision(10)
        <<(float)time_req/CLOCKS_PER_SEC<<" seconds" << endl; 
return 0;
}
