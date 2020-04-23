#include<bits/stdc++.h>
#include<stack>

using namespace std;

stack<int> solutionSet;
bool hasSolution;

void displaySolutionSet()
{
   stack<int> temp;
   
   while(!solutionSet.empty())
   {
      cout<< solutionSet.top() <<" ";
      temp.push(solutionSet.top());
      solutionSet.pop();
   }
   cout<<"\n";
   
   while(!temp.empty())
   {
     solutionSet.push(temp.top());
     temp.pop();
   }
}

bool solve(int s,int indx, int set[], int n, int sum)
{
    if(s>sum)
      return false;
    
    //check if stack has right subsets of numbers
    if(s==sum)
    {
        hasSolution = true;
        
        //display stack contents
        displaySolutionSet();
        
        //Though found a solution but deliberately 
        //returning false to find deliberately
        
        return false;
       
    }
    
    for(int i=indx; i<n; i++)
    {
       solutionSet.push(set[i]);
       
       //add set[i] to thr 's' and recursively start from next number
       if(solve(s+set[i], i+1, set,n,sum))
       {
         return true;
       }

       //found false
       //Removing element from stack i.e Backtracking
       solutionSet.pop();

    }
   
   return false;
}
 
int main()
{
	int n;
  	cout<<"Enter number of elements:";
  	cin>>n;
  	int set[n];
  	int sum;
  	cout<<"Enter the sum: ";
  	cin>>sum;
  	cout<<"Enter the elements of the set:"<<endl;
  	for(int i=0;i<n;i++)
    		cin>>set[i];
 
    
    	solve(0,0,set,n,sum);
	    
	if(hasSolution == false)
	    cout << "No Solution";
 
    return 0;
}
/*
Enter number of elements: 7
Enter the sum: 30
Enter the elements of the set:
10 7 5 18 12 20 15
15 5 10 
20 10 
18 5 7 
12 18 
*/    


