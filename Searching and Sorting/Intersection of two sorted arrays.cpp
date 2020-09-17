// { Driver Code Starts
// C++ program to find union of 
// two sorted arrays 
#include <bits/stdc++.h> 
using namespace std; 

vector<int> printIntersection(int arr1[], int arr2[], int N, int M);  
  
/* Driver program to test above function */
int main() 
{ 
    int T;
    cin >> T;
 
    while(T--){
        
        int N, M;
        cin >> N >> M;
        int arr1[N];
        int arr2[M];
        for(int i = 0;i<N;i++){
            cin >> arr1[i];
        }
        
        for(int i = 0;i<M;i++){
            cin >> arr2[i];
        }
        
        // Function calling 
        vector<int> v;
        v = printIntersection(arr1, arr2, N, M); 
        
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";

        cout << endl;
    }
    
  return 0; 
} 
// } Driver Code Ends


/* Function prints Intersection of arr1[] and arr2[] 
N is the number of elements in arr1[] 
M is the number of elements in arr2[] 
Return the array
*/
vector<int> printIntersection(int arr1[], int arr2[], int n, int m) {
    int i = 0, j = 0; 
    vector<int> ans;
    while (i<n && j<m) { 
        while(i+1<n && arr1[i]==arr1[i+1]) i++;
        while(j+1<m && arr2[j]==arr2[j+1]) j++;
        if(arr1[i]<arr2[j]) i++;
        else if(arr2[j]<arr1[i]) j++;
        else {
            ans.push_back(arr2[j++]);
            i++;
        }
    }
    return ans;
    //Your code here
}
