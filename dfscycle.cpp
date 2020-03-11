#include<iostream>
using namespace std;
int g[10][10],visited[10];
int flag=1;
void dfs(int i,int n)
{
  int j;
  cout<<i<<" ";
  visited[i]=1;
  for(j=0;j<n;j++)
  {
   if(visited[j]=1 && g[i][j]==1)
   {
     flag=0;
     break;
   }
   if(visited[j]==0 && g[i][j]==1)
   {
     dfs(j,n);
   }
  }
}
int main()
{
int n;
cout<<"Enter the number of vertices:"<<endl;
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

if(flag==0)
cout<<"Cycle Exists\n";
else
cout<<"Cycle doesnot Exists\n";

return 0;
}
