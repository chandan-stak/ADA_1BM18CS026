#include<bits/stdc++.h>
using namespace std;
int a[30][30],n;
int minimum(int visited[], int dist[])
{
   int min=10000,mini;
   for(int i=0;i<n;i++)
   {
      if(!visited[i] && dist[i]<min)
      {
          min=dist[i];
          mini=i;
      }
   }
   
  return mini;
}
void dijkstra(int src)
{
   int dist[n],visited[n];
   
   for(int i=0;i<n;i++)
   {
       dist[i]=10000;
       visited[i]=0;
   }
   dist[src]=0;
   for(int i=0;i<n-1;i++)
   {
      int u=minimum(visited,dist);
      visited[u]=1;
      for(int v=0;v<n;v++)
      {
        if(!visited[v] && a[u][v]!=10000 && dist[u]!=10000 && (dist[u]+a[u][v])<dist[v])
             dist[v]=dist[u]+a[u][v];
        
      }
   }
   cout<<"Shortest path to all other verices from "<<src<<"is"<<endl;
   cout<<"Vertices \t Distance from source"<<endl;
   for(int i=1;i<n;i++)
   {
       cout<<i<<"\t"<<dist[i]<<endl;
   }
   
}
int main()
{
cout<<"Enter the no. of vertices"<<endl;
cin>>n;
cout<<"Enter the weighted adjacency matrix (Enter 10000 if there is no edge)"<<endl;
for(int i=0;i<n;i++)
{
   for(int j=0;j<n;j++)
   {
        cin>>a[i][j];   
   }
}
int src;
cout<<"Enter the source vertex"<<endl;
cin>>src;
dijkstra(src);
return 0;
}
/*
Enter the no. of vertices
5
Enter the weight adjacency matrix (Enter 10000 if there is no edge)
0 10 10000 5 10000
10000 0 1 2 10000
10000 10000 0 10000 4
10000 3 9 0 2
7 10000 6 10000 0
Enter the source vertex
0
Shortest path to all other verices from 0is
Vertices 	 Distance from source
1	8
2	9
3	5
4	7
*/

