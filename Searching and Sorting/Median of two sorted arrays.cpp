// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int findMedian(int *, int , int *, int);

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int arr[n];
	    int brr[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> brr[i];
	    }
	    
	    if(n < m)
	        cout << findMedian(arr, n, brr, m) << endl;
	   else
	        cout << findMedian(brr, m, arr, n) << endl;
	    
	}

}// } Driver Code Ends


//User function template for C++

// arr : given array with size n 
// brr : given array with size m
int findMedian(int arr[], int n, int brr[], int m){
    int min_i = 0, max_i = n;
    int i, j, median;
    while(min_i <= max_i){
        i = (min_i+max_i)/2;
        j = (n+m+1)/2-i;
        if(i < n && j > 0 && brr[j-1] >= arr[i]) min_i = i+1;
        else if(i > 0 && j < m && brr[j] < arr[i-1]) max_i = i-1;
        else{
            if(i == 0) median = brr[j-1];  
            else if(j == 0) median = arr[i-1];
            else median = max(arr[i-1], brr[j-1]);
            break;
        }
    }
    if((n+m)%2 == 1) return (double)median;
    if(i == n) return (median+brr[j])/2.0;
    if(j == m) return (median + min(arr[i], brr[j]))/2.0;
    return (median + min(arr[i], brr[j]))/2.0;
    // code here
}