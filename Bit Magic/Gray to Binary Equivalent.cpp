// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

// function to conver given N Gray to Binary
int grayToBinary(int n){
    int b=0;
    for(;n;n=n>>1) b^=n;
    return b;
    // Your code here
    
}

// { Driver Code Starts.

// Driver code
int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin>>n;//initializing n
        
        //calling function grayToBinary()
       cout<< grayToBinary(n)<<endl;
    }
}
  // } Driver Code Ends