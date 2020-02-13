#include<iostream>
using namespace std;
int factorial(int);
int main()
{
   int num, fact;
   
   cout<<"Enter any integer number: ";
   cin>>num;
   fact =factorial(num);
   cout<<"factorial of "<<num<<" is "<<fact<<endl;
   return 0;
}
int factorial(int n)
{
   	if(n<0)
	{	
		cout<<"Invalid number. Terminating program\n";
		exit(1);
	}
	if(n==0)
      		return(1);

   	return(n*factorial(n-1));
}
