// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


 // } Driver Code Ends


// Function to return maximum of sum without adjacent elements
ll FindMaxSum(ll arr[], ll n){
    ll dp[n+1];
    dp[0] = 0;
    dp[1] = arr[0];
    dp[2] = max(arr[0],arr[1]);
    for(int i=3;i<=n;i++) dp[i] = max(dp[i-1], dp[i-2] + arr[i-1]);
    return dp[n];
    // Your code here
}


// { Driver Code Starts.

int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		ll n;
		cin>>n;
		ll a[n];
		
		//inserting money of each house in the array
		for(ll i=0;i<n;++i)
			cin>>a[i];
			
		//calling function FindMaxSum()
		cout<<FindMaxSum(a,n)<<endl;
	}
	return 0;
}
  // } Driver Code Ends