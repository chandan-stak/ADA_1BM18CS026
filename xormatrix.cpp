#include<bits/stdc++.h>
using namespace std;
void xormatrix(int n);
int main()
{
   int n;
   cout<<"Enter a number which is multiple of 4\n";
   cin>>n;
   if(n%4==0)
      xormatrix(n);
   else
      cout<<"Invalid Input\n";
}
void xormatrix(int n)
{
   int a[n][n],x=0,i,j,k,l;
   for(i=0;i<n/4;i++)
   {
     for(j=0;j<n/4;j++)
     {
       for(k=0;k<4;k++)
       {
         for(l=0;l<4;l++)
         {
            a[i*4+k][j*4+l]=x;
            x++;
          }
        }
      }
    }
    cout<<"The matrix in which the bitwise in XOR of each row and colomn is same is\n";
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
     cout<<a[i][j]<<" ";
  }
  cout<<endl;
} 
}
*/
Enter a number which is multiple of 4
4
The matrix in which the bitwise in XOR of each row and colomn is same is
0 1 2 3 
4 5 6 7 
8 9 10 11 
12 13 14 15 
*/







