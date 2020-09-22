// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return Largest Number
string largestNumber(int n, int sum){
    string output(n, '0');
    for(int i = 0; i < n; i++){
        int val = 0;
        if(sum > 9){
            val = 9;
            sum -= 9;
        }
        else{
            val = sum;
            sum = 0;
        }
        output[i] = val + '0';
    }
    
    if(sum > 0) return "-1";
    
    return output;
    // Your code here
}

// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
        
        //function call
		cout<<largestNumber(n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends