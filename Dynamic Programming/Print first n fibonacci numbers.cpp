// { Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;
vector<long long> printFibb(int);



int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        
        //calling function printFibb()
        vector<long long> ans = printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends


//User function template for C++

// n : given integer value
// print the nth fibb number in the function 
vector<long long> printFibb(int n) {
    vector<long long> v(n);
    v[0] = 1, v[1] = 1;
    for(int i=2;i<n;i++) v[i] = v[i-1] + v[i-2]; 
    return v;
    //code here
}