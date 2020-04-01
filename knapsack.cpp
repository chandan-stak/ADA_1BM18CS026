#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,m;
   cout<<"Enter the no. of objects and knapsack capacity"<<endl;
   cin>>n>>m;
   int w[n+1],p[n+1];
   w[0]=0;
   p[0]=0;
   int k[n+1][m+1];
   cout<<"Enter the weights of the objects"<<endl;
   for(int i=1;i<=n;i++)
      cin>>w[i];
   cout<<"Enter the profit of the objects"<<endl;
   for(int i=1;i<=n;i++)
      cin>>p[i];
   for(int i=0;i<=n;i++)
   {
     for(int j=0;j<=m;j++)
     {
       if(i==0 || j==0)
           k[i][j]=0;
       else if(w[i]<=j)
           k[i][j]=max(p[i]+k[i-1][j-w[i]],k[i-1][j]);
       else
           k[i][j]=k[i-1][j];
     }
   }
   cout<<"Optimal solution :"<<k[n][m]<<endl;
   int i=n;
   int j=m;
   int x[n+1];
   cout<<"The objects included are represented with '1' "<<endl;
   while(i>=0 && j>=0)
   {
     if(k[i][j] != k[i-1][j])
     {
        x[i]=1;
        j=j-w[i];
     }
     else
     {
        x[i]=0;
     }
    i--; 
   }
   for(int i=1;i<=n;i++)
   {
     cout<<i<<" = "<<x[i]<<endl;
   }

return 0;
}
/*
Enter the no. of objects and knapsack capacity
4 5
Enter the weights of the objects
2 1 3 2
Enter the profit of the objects
12 15 25 10
Optimal solution :40
The objects included are represented with '1' 
1 = 0
2 = 1
3 = 1
4 = 0
*/
