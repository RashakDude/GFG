// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector <int> countDistinct(int[], int, int);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        vector <int> result = countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}// } Driver Code Ends



vector <int> countDistinct (int A[], int n, int k){
    unordered_map<int, int> um;
    vector <int> result;

    for (int i = 0; i < k; i++) 
        um[A[i]]++;
    
    result.push_back(um.size());

    for (int i = 1; i < n - k + 1; i++) 
    {
        um[A[i - 1]]--;
        if (um[A[i - 1]] <= 0) 
            um.erase(A[i - 1]);
        
        um[A[i + k - 1]]++;

        result.push_back(um.size());
    }
    return result;
    //code here.
}