// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find missing integer in array
// arr: input array
// n: size of array
int findMissing(int arr[], int n) { 
    bool present[n+1] = {false};
    for(int i=0;i<n;i++){
        if(arr[i]>0 && arr[i]<=n) present[arr[i]] = true;
    }
    for(int i=1;i<=n;i++) if(!present[i]) return i;
    return n+1;
    // Your code here
    
}

// { Driver Code Starts.

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0; i<n; i++)cin>>arr[i];
        
        cout<<findMissing(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends