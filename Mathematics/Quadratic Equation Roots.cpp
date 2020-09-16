// { Driver Code Starts
//Initial Template for C++
/* C++ program to find roots of a quadratic equation */
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//You need to complete this function
void quadraticRoots(int a,int b, int c)
{
   
   //Your code here
   double d = sqrt((b*b) - (4*a*c));
   if((b*b)-(4*a*c)<0) cout << "Imaginary";
   else cout << floor(((-1*b)-d)/(2*a)) << " " << floor(((-1*b)+d)/(2*a));
   // Your don't need to printline
   // It will automatically be 
   // handled by driver code
}



// { Driver Code Starts.

int main() {
	int T; 
	//input number of testcases
	cin>>T; 
	
	while(T--)
	{
	    int a, b, c; 
	    //Input a, b, and c
	    cin>>a>>b>>c; 
	    
	    quadraticRoots(a,b,c);
	    cout<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends