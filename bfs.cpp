#include<bits/stdc++.h>
using namespace std;
void bfs(int v,int n,int f,int r,int visited[],int g[][20],int q[]);
int main()
{
  int g[20][20],q[20],visited[20],r=-1,f=0,i,j,n,v;
  cout<<"Enter no. of vertices\n";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    q[i]=0;
    visited[i]=0;
  }
  
  cout<<"Enter the adjacency matrix of the graph\n";
  for(i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
     cin>>g[i][j];
    }
  }
  
  cout<<"Enter the starting node of your choice:\n";
  cin>>v;
  
  bfs(v,n,f,r,visited,g,q);
  cout<<"All the nodes reachable from "<<v<<"->"<<n<<"are\n";
  for(i=1;i<=n;i++)
  {
    if(visited[i])
    cout<<i<<" ";
  }
  cout<<endl;

return 0;
}
void bfs(int v,int n,int f,int r,int visited[],int g[][20],int q[])
{
  int i,j;
  for(i=1;i<=n;i++)
  {
    if(g[v][i] && !visited[i])
        q[++r]=i;

    if(f<=r)
    {
      visited[q[f]]=1;
      bfs(q[f++],n,f,r,visited,g,q);
    }
  }
 
}

