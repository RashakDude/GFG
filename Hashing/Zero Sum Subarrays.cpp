// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>

using namespace std;

#define ll long long 
ll findSubarray(vector<ll> , int );

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        
        cout << findSubarray(arr,n) << "\n";
    }
	return 0;
}// } Driver Code Ends


//User function template for C++

// arr : given array 
// n : size of the given array
ll findSubarray(vector<ll> arr, int n ) {
    ll pref[n+1];
    pref[0]=0;
    for(int i=0;i<=n;i++) pref[i]=pref[i-1]+arr[i-1];
    map<ll,ll> m;
    for(int i=0;i<=n;i++) m[pref[i]]++;
    map<ll,ll> :: iterator itr;
    ll ans=0;
    for(itr=m.begin();itr!=m.end();itr++){
        ll val=itr->second;
        val--;
        ans=ans+(val*(val+1))/2;
    }
    return ans;
    //code here
}
