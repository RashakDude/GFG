// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

long long getSmallestDivNum(long long n);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<getSmallestDivNum(n)<<endl;
	}
	return 0;
	
}// } Driver Code Ends


/*You are required to complete this method */
long long getSmallestDivNum(long long n)
{
    long long ans = 1;
    for(long long i = 1; i <= n; i++) 
        ans = (ans * i)/(__gcd(ans, i)); 
    return ans;
    //Your code here
}
