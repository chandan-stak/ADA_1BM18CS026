#include<iostream>
using namespace std;
int g[10][10],visited[10];
int count=0;
void dfs(int i,int n)
{
 int j;
 cout<<i<<" ";
 visited[i]=1;
 count++;
 
 for(j=0;j<n;j++)
 {
  if(visited[j]==0 && g[i][j]==1)
  {
    dfs(j,n);
  }
 }
}
int main()
{
int n;
cout<<"Enter the number of vertices\n";
cin>>n;

cout<<"Enter adjacency matrix:\n";
for(int i=0;i<n;i++)
{ 
 for(int j=0;j<n;j++)
 {
   cin>>g[i][j];
 }
}

for(int i=0;i<n;i++)
{
 visited[i]=0;
}

dfs(0,n);

if(count<n)
cout<<"Graph is not connected\n";
else
cout<<"Graph is connected\n";

return 0;
}
