#include<bits/stdc++.h>
using namespace std;
int arr[30][30];
bool hasCycle(int n);
bool dfs(int vertex,set<int>&visited, int parent,int n);
int main()
{
   bool res;
   int n;
   cout<<"Enter the number of vertices"<<endl;
   cin>>n;
   cout<<"Enter the adjacency matrix"<<endl;
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<n;j++)
     {
        cin>>arr[i][j];
     }
   }
   res=hasCycle(n);
   if(res)
       cout<<"The graph has cycles"<<endl;
   else
       cout<<"The graph has no cycle"<<endl;

return 0;
}
bool hasCycle(int n)
{
  set<int>visited;
  for(int v=0;v<n;v++)
  {
    if(visited.find(v) != visited.end())
       continue;
    
    if(dfs(v,visited,-1,n))
    {
       return true;
    }
  }
}
bool dfs(int vertex,set<int>&visited, int parent,int n)
{
    visited.insert(vertex);
    for(int v=0;v<n;v++)
    {
        if(arr[vertex][v])
        {
           if(v==parent)
             continue;
           
           if(visited.find(v) != visited.end())
              return true;
           
           if(dfs(v,visited,vertex,n))
              return true;
        }
    }
    return false;
}















