// { Driver Code Starts
//Initial Template for C++



#include <iostream>
using namespace std;



 // } Driver Code Ends


//User function Template for C++

// Complete this function
int sumOfDigits(int n){
    return n==0 ? 0 : n%10 + sumOfDigits(n/10);
    //Your code here
}

// { Driver Code Starts.


int main() {
	int T;
	
	//taking testcases
	cin>>T;
	while(T--)
	{
	    int n;
	    
	    //taking input n
	    cin>>n;
	    
	    //calling method sumOfDigits()
	    cout<<sumOfDigits(n)<<endl;
	    
	    
	}
	return 0;
}  // } Driver Code Ends