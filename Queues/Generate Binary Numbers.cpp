// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long


 // } Driver Code Ends


// Function to print all binary numbers upto n

vector<string> generate(ll n)
{
    queue<string> q;
    vector<string> s;
    q.push("1"); 
    while (n--) { 
        string s1 = q.front(); 
        q.pop(); 
        s.push_back(s1); 
        string s2 = s1;
        q.push(s1.append("0")); 
        q.push(s2.append("1")); 
    }
    return s;
	// Your code here
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends