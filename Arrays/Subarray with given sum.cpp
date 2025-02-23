// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find the subarray with given sum k
// arr: input array
// n: size of array
vector<int> subarraySum(int arr[], int n, int s){
    int last=0;
    int start=0;
    unsigned long long currsum=0;
    bool flag=false;
    vector<int>res;
    for(int i=0;i<n;i++)
    {
        currsum += arr[i];
        if(currsum>=s)
        {
            last=i;
            while(s<currsum && start<last)
            {
                currsum -= arr[start];
                ++start;
            }
            if(currsum==s)
            {
                res.push_back(start + 1);
                res.push_back(last + 1);
                flag = true;
                break;
            }
        }
    }
    if(flag==false) res.push_back(-1);
    return res; 
}

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        vector<int>res;
        res = subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends