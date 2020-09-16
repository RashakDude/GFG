// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


unordered_map<int, int> um;


int firstRepeated(int *, int);

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        int arr[n];
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> arr[i] ;
            
        cout << firstRepeated(arr,n) << "\n";
    }

    return 0;
}
// } Driver Code Ends


//User function template in C++


// arr : given array
// n : size of the array

int firstRepeated(int arr[], int n) {
    int count = INT_MAX;
    set<int> s;
    for(int i=n-1;i>=0;i--){
        if(s.find(arr[i])!=s.end()) count = min(count,i+1);
        s.insert(arr[i]);
    }
    return count==INT_MAX ? -1 : count;
    //code here
}
