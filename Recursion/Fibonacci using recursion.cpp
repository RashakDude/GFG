// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

//Complete this function
long long fibonacci(int n){
    if(n==1 || n==2) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
    //Your code here
}


// { Driver Code Starts.



int main() {
	int T;
	
	//taking total testcases
	cin>>T;
	while (T--)
	{
	    int n;
	    //taking number n
	    cin>>n;
	    
	    //calling fibonacci() function
	    cout<<fibonacci(n)<<endl;
	    
	    
	}
	return 0;
}  // } Driver Code Ends