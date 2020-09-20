// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to store Next larger elements


vector <long long> nextLargerElement(long long arr[], int n){
    stack <long long int> s;
    vector <long long int> res (n);
    for (int i = n-1; i >= 0; i--){
        while (!s.empty () and s.top () <= arr[i]) s.pop ();
        if (s.empty ()) res[i] = -1;
        else res[i] = s.top ();
        s.push (arr[i]);
    }
    return res;
    // Your code here
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        vector <long long> res = nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
  // } Driver Code Ends