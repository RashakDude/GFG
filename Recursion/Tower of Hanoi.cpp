// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long toh(int n, int from, int to, int aux);

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        long long moves = 0;
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        moves = toh(N, 1, 3, 2);
        cout << moves << endl;
    }
    return 0;
}



 // } Driver Code Ends


// You need to complete this function

// avoid space at the starting of the string in "move disk....."
long long toh(int N, int from, int to, int aux) {
    long long moves = 0ll;
    if (N >= 1) {
        moves += toh(N - 1, from, aux, to);
        cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
        moves++;
        moves += toh(N - 1, aux, to, from);
    }
    return moves;
    // Your code here
}


// { Driver Code Starts.  // } Driver Code Ends