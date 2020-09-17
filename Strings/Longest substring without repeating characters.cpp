// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

int SubsequenceLength(string s);


 // } Driver Code Ends


//User function Template for C++

// s is the given string
int SubsequenceLength (string str) {
    int n = str.size();
    int res = 0;
    vector<int> lastIndex(256, -1); 
    int i = 0; 
    for (int j = 0; j < n; j++) { 
        i = max(i, lastIndex[str[j]] + 1); 
        res = max(res, j - i + 1); 
        lastIndex[str[j]] = j; 
    } 
    return res; 
    // Your code goes here
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    cin>>ws;
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<SubsequenceLength(str)<<"\n";
    }
    return 0;
}
  // } Driver Code Ends