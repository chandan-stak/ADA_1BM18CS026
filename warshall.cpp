#include<bits/stdc++.h>
using namespace std;
void warshall(int n,int a[][20],int p[][20]);
int main()
{
        int a[20][20],p[20][20],n,i,j;
        cout<<"Enter the number of vertices\n"; 
        cin>>n; 
	cout<<"Enter the adjacency matrix of the graph\n"; 
        for(i=0;i<n;i++)
	{ 
           for(j=0;j<n;j++)
	       cin>>a[i][j];  
        }

	warshall(n,a,p);
        
        cout<<"\nThe path matrix of the given graph is\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			cout<<p[i][j]<<" ";
		cout<<endl;
	}

	return 0;
}
void warshall(int n,int a[][20],int p[][20])
{
   int i,j,k;
   for(i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
     { 
       p[i][j]=a[i][j];
     }
   }  
   for(k=0;k<n;k++)
   {
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
       {
         if(p[i][j]!=1 && (p[i][k]==1 && p[k][j]==1))
             p[i][j]=1;
       }
     }
   }
}
/*
Enter the number of vertices
4
Enter the adjacency matrix of the graph
0 1 0 0
0 0 0 1
0 0 0 0
1 0 1 0

The path matrix of the given graph is
1 1 1 1 
1 1 1 1 
0 0 0 0 
1 1 1 1 
*/










