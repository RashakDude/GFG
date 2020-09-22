// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

#define SIZE 100


 // } Driver Code Ends


/*  Function to find the area of 1s
*   SIZE: declared globally for matrix definition
*   n, m: row and column of matrix
*   A[][]: 2D matrix from input
*/

int dfs(int A[SIZE][SIZE], int N, int M, int i, int j){
    if(i<0 || j<0 || i>=N || j>=M || A[i][j]==0) return 0;
    A[i][j] = 0;
    return 1 + dfs(A,N,M,i,j+1) + dfs(A,N,M,i+1,j+1) + dfs(A,N,M,i+1,j) + dfs(A,N,M,i+1,j-1)
    + dfs(A,N,M,i,j-1) + dfs(A,N,M,i-1,j-1) + dfs(A,N,M,i-1,j) + dfs(A,N,M,i-1,j+1);
}

int findMaxArea(int N, int M, int A[SIZE][SIZE] )
{
    int ans = 0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(A[i][j]==1) ans = max(ans,dfs(A,N,M,i,j));
        }
    }
    return ans;
    // Your code here
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int g[SIZE][SIZE];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> g[i][j];

        cout << findMaxArea(n, m, g) << endl;
    }

    return 0;
}  // } Driver Code Ends