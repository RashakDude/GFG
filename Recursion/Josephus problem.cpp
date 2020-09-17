// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int josephus(int n, int k);

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		cout<<josephus(n,k)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this method */
int josephus(int n, int k){
    int ans = 1;
    for(int i=2;i<=n;i++) ans = (ans+k-1)%i+1;
    return ans;
   //Your code here
}
