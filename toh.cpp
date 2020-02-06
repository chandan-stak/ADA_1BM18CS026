#include<iostream>
#include<algorithm>

using namespace std;
 
void towerhanoi(int n,char src,char temp,char dest);
int main()
{
int n;
char src='A',temp='B',dest='C';
cout<<"Enter the number of discs\n";
cin>>n;
towerhanoi(n,src,temp,dest);
return 0;
}
void towerhanoi(int n,char src,char temp,char dest)
{
if(n==1)
{
cout<<"Move "<<n<<" from "<<src<<" to "<<dest<<endl;
return;
}
towerhanoi(n-1,src,dest,temp);
cout<<"Move "<<n<<" from "<<src<<" to "<<dest<<endl;
towerhanoi(n-1,temp,src,dest);
}
