// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>

using namespace std;

bool findPartition(int *, int);

// Position this line where user code will be pasted.

int main() {
    
    //taking total testcases
    int tc;
    cin >> tc;
    while (tc--) {
        
        //taking size of array
        int n, i;
        cin >> n;
        int a[n];
        
        //inserting elements in the array
        for (i = 0; i < n; i++) cin >> a[i];

        //calling findPartition() function and
        //printing "YES", if it returns true
        //else "NO"
        if (findPartition(a, n))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
// } Driver Code Ends


// User function template in C++

// a : given array
// n : size of the array

bool findPartition(int a[], int n) {
    int sum = 0;
    int i,j;
    for(i=0;i<n;i++) sum+=a[i];
    if(sum%2!=0) return false;
    bool subset[2][sum+1];
    for(i=0;i<=n;i++) {
        for(j=0;j<=sum;j++) {
            if(j==0) subset[i%2][j] = true;
            else if(i==0) subset[i%2][j] = false;
            else if(a[i-1]<=j) subset[i%2][j] = subset[(i+1)%2][j-a[i-1]] || subset[(i+1)%2][j];
            else subset[i%2][j] = subset[(i+1)%2][j];
        }
    }
    return subset[n%2][sum/2];
}