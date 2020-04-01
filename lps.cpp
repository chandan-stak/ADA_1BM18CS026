#include<bits/stdc++.h>
using namespace std;
int lps(string s)
{
   int n=s.length();
   int i,j,cl;
   int L[n][n];
   
   for(i=0;i<n;i++)
     L[i][i] = 1;
   
   for(cl=2;cl<=n;cl++)
   {
    for(i=0;i<n-cl+1;i++)
    {
     j=i+cl-1;
     if(s[i] == s[j] && cl==2)
       L[i][j]=2;
     else if (s[i] == s[j])
       L[i][j] = L[i+1][j-1] +2;
     else
       L[i][j]=max(L[i][j-1],L[i+1][j]);
     }
    }
return L[0][n-1];
}
int main()
{
  string s;
  cout<<"Enter a string"<<endl;
  cin>>s;
  cout<<"The Length of the longest pallindromic subsequence is : "<<lps(s)<<endl;
  
return 0;  
}
/*
Enter a string
GEEKSFORGEEKS
The Length of the longest pallindromic subsequence is : 5
/*

