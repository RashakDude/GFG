// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findIslands(vector<int> A[], int N, int M);

int main() {

    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<int> A[N];
        for (int i = 0; i < N; i++) {
            vector<int> temp(M);
            A[i] = temp;
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        cout << findIslands(A, N, M) << endl;
    }
    return 0;
}// } Driver Code Ends


/*you are required to complete this method*/

/*  Function to find number of islands in the given graph
*   A[]: input array
*   N, M: Row and column of given matrix
*/
void DFS(vector<int> A[],int N,int M,int i,int j) {
    if(i<0 || i>=N || j<0 || j>=M || A[i][j]!=1) return;
    A[i][j]=2;
    DFS(A,N,M,i+1,j);//down
    DFS(A,N,M,i,j+1);//right
    DFS(A,N,M,i-1,j);//top
    DFS(A,N,M,i,j-1);//left
    DFS(A,N,M,i+1,j+1);//South East
    DFS(A,N,M,i+1,j-1);//South West
    DFS(A,N,M,i-1,j-1);//North West
    DFS(A,N,M,i-1,j+1);//North East
}

int findIslands(vector<int> A[], int N, int M) {
    // Your code here
    int count=0;
    if(N==0) return 0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(A[i][j]==1){
                DFS(A,N,M,i,j);
                count++;
            }
        }
    }
    return count;
}
