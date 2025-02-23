// { Driver Code Starts


#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends




class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c) 
    {
        int row = 0, col = 0;
        vector<int> output;
        while(row<r && col<c) {
            for(int i=col; i<c; i++) output.push_back(matrix[row][i]);
            row++;
            for(int i=row; i<r; i++) output.push_back(matrix[i][c-1]);
            c--;
            if(row<r) {
                for(int i=c-1; i>=col; --i) output.push_back( matrix[r-1][i]);
                r--;
            }
            if(col<c) {
                for(int i=r-1; i>=row; --i) output.push_back( matrix[i][col]);
                col++;    
            }   
           
        }
        return output;
        // code here 
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends