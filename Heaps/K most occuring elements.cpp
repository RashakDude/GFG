// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends


// Function to print the k numbers with most occurrences 

int kMostFrequent(int arr[], int n, int k) 
{
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++) mp[arr[i]]++;
    vector<int> v;
    for(auto i:mp) v.push_back(i.second);
    sort(v.begin(),v.end());
    int sum=0;
    while(k--){
        sum += v.back();
        v.pop_back();
    }
    return sum;
	// Your code here	
} 

// { Driver Code Starts.
// Driver program to test above 
int main() 
{
	int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        cin >> k;
        cout << kMostFrequent(arr, n, k) << endl; 
    }

	return 0; 
} 
  // } Driver Code Ends