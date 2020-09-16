// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


// Function to find the transition point
int transitionPoint(int arr[], int n) {
    if(arr[0]==1) return 0;
    int count = -1;
    for(int i=0;i<n-1;i++){
        if(arr[i]==0 && arr[i+1]==1){
            count = i+1;
            break;
        }
    }
    return count;
    // code here
}