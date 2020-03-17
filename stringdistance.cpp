#include<bits/stdc++.h>
using namespace std;

int min(int a,int b,int c)
{
  return min(min(a,b),c);
}

int dist(string s1,string s2,int n,int m)
{
  if(n==0)  
     return m;

  if(m==0)
     return n;

  if(s1[n-1]==s2[m-1])
     return dist(s1,s2,n-1,m-1);
   
  else
     return 1+min(dist(s1,s2,n,m-1),dist(s1,s2,n-1,m),dist(s1,s2,n-1,m-1));
}

int main()
{
	string s1,s2;
	cout<<"Enter two strings"<<endl;
	getline(cin,s1);
	getline(cin,s2);
	cout<<"Minimum operations required : "<<dist(s1,s2,s1.length(),s2.length())<<endl;
	return 0;
}
/*
Enter two strings
Chandan
Chandu
Minimum operations required : 2
*/
