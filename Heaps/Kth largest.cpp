// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int KthLargest(int arr[], int n, int k);

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];

        cout << KthLargest(arr, n, k) << endl;
    }

    return 0;
}// } Driver Code Ends


int KthLargest(int arr[], int n, int k) {
    priority_queue<int, vector<int>,greater<int>> pq(arr,arr+k);
    for(int i=k;i<n;i++){
        if(arr[i]>=pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
    // Your code here
}