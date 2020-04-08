#include<bits/stdc++.h>
using namespace std;
void prim(int v,int a[][30],int visited[],int n);
int tw=0,c=0;
int main()
{
   int a[30][30],visited[30],n,i,j;
   cout<<"Enter the number of vertices\n";
   cin>>n;
   cout<<"Enter the weight matrix of the graph (Enter 10000 if there exists no edge between the two vertices)\n";
for(i=0;i<n;i++)
{
   visited[i]=0;
   for(j=0;j<n;j++)
     cin>>a[i][j];
}
cout<<"The Minimum Spanning Tree (MST) is\n";
cout<<"Edge\tWeigh\n";
prim(0,a,visited,n);
cout<<"\nThe total weight of MST by Prim's algorithm = "<<tw<<"\n";
return 0;
}
void prim(int v,int a[][30], int visited[], int n)
{
   int i,j,min=10000,it,jt;
   visited[v]=1;
   for(i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
     {
       if(visited[i] == 1 && visited[j] == 0)   
       {
          if(a[i][j]<min)
          {
            min = a[i][j];    
            it=i;
            jt=j;
          }
        }
      }
    }
    tw=tw+a[it][jt];
    cout<<it+1<<"->"<<jt+1<<"\t"<<a[it][jt]<<"\n";
    c++;
    visited[jt]= 1;
    if(c == n-1)
       return;   
    prim(jt,a,visited,n);
}

