// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

int findLongestConseqSubseq(int [], int );

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		int a[n];
		
		// input array elements
		for(int i=0;i<n;i++)
		    cin>>a[i];
		
		cout<< findLongestConseqSubseq(a, n)<<endl;
		
	}
	return 0;
}// } Driver Code Ends




// function to find longest consecutive subsequence
// n : size of array
// arr[] : input array
int findLongestConseqSubseq(int arr[], int n)
{
    unordered_set<int> S; 
    int ans = 0; 
    for (int i = 0; i < n; i++) S.insert(arr[i]); 
    for (int i = 0; i < n; i++) { 
        if (S.find(arr[i] - 1) == S.end()) { 
            int j = arr[i]; 
            while (S.find(j) != S.end()) j++; 
            ans = max(ans, j - arr[i]); 
        } 
    } 
    return ans; 
    //Your code here
}