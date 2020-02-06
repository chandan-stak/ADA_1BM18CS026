#include<iostream>
#include<algorithm>

using namespace std;

int gcd(int a,int b)
{
 if(b==0)
  return a;

 else
  return gcd(b,a%b);
}

int main()
{
 int m,n;
 cout<<"Enter two numbers: "<<endl;
 cin>>m>>n;
 
 int p=gcd(m,n);
 
 cout<<"GCD of "<<m<<" and "<<n<<" is "<<p<<endl;

 return 0;

}
