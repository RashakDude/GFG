// { Driver Code Starts


#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends




class Solution
{   
public:
    void getCofactor(vector<vector<int>> &matrix, vector<vector<int>> &temp, int p, int q, int n) {
        int i = 0, j = 0;
        for ( int row = 0; row < n; row++) {
            for ( int col = 0; col < n; col++) {
                if (row != p && col != q) {
                    temp[i][j++] = matrix[row][col];
                    if (j == n - 1) {
                        j = 0;
                        i++;
                    }
                }
            }
        }
    }

    int determinantOfMatrix(vector<vector<int> > matrix, int n) {
        int D = 0;
        if (n == 1) return matrix[0][0];
        vector<vector<int> > temp(n, vector<int>(n)); 
        int sign = 1; 
        for (  int i = 0; i < n; i++) {
            getCofactor(matrix, temp, 0, i, n);
            D += sign * matrix[0][i] * determinantOfMatrix(temp, n - 1);
            sign = -sign;
        }
        return D;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        int result = ob.determinantOfMatrix(matrix, n);
        cout<<result<<endl;
    }
    return 0;
}  // } Driver Code Ends