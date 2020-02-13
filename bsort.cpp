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

 clock_t time_req; 
 time_req = clock(); 
 for(int i=0;i<n-1;i++)
 {
  for(int j=i+1;j<n;j++)
  {
    if(a[i]>a[j])
    {
     int t=a[i];
         a[i]=a[j];
         a[j]=t;
    }
  }
 }
 time_req = clock()- time_req; 
 cout<<"Sorted Elements :"<<endl;
 for(int i=0;i<n;i++)
 {
  cout<<a[i]<<" "<<endl;;
 }
 cout << "Processor time taken for Bubble sort: "<<fixed<<setprecision(10)
        <<(float)time_req/CLOCKS_PER_SEC<<" seconds" << endl; 
return 0;
}
    
