// { Driver Code Starts

#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends



class Solution
{   
public:     
    void rotateby90(vector<vector<int> >& matrix, int n) {
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++) swap(matrix[i][j],matrix[j][i]);
        }
        for(int i=0;i<n;i++){
            for(int j=0,k=n-1;j<k;j++,k--) swap(matrix[j][i],matrix[k][i]);
        }
        // code here 
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
        ob.rotateby90(matrix, n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends