#include<stdio.h>
int main()
{

 int t;
 scanf("%d",&t);
 int a=t;
 int o[a];
 int j=0;
 while(t--)
 {
   int n,k;
   scanf("%d%d",&n,&k);
   
   int a[n];
   int i;
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }

   int f=0;
   int l=n-1;
   while(f<=l)
   {
     int m=(f+l)/2;
     
     if(k<a[m])
     {
       l=m-1;
     }
     else if(k==a[m])
     {
      o[j]=1;
      j++;
      break;
     }
     else
     {
      f=m+1;
     }
   }
   if(f>l)
   {
    o[j]=-1;
    j++;
   }
 }
 int p;
 for(p=0;p<a;p++)
 {
   printf("%d\n",o[p]);
 }
return 0;
}
