// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int maxDistance(int arr[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cout<<maxDistance(arr,n)<<endl;
    }
    return 0;
}// } Driver Code Ends


// your task is to complete this function
int maxDistance(int arr[], int n){
    unordered_map<int,int> mp;
    int dist = 0;
    for(int i=0;i<n;i++){
        if(mp.find(arr[i])==mp.end()) mp[arr[i]] = i;
        else dist = max(dist,i-mp[arr[i]]);
    }
    return dist;
//Code here
}