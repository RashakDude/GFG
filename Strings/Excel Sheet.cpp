// { Driver Code Starts
//Initial template for C++


#include<bits/stdc++.h>
using namespace std;
string ExcelColumn(int n);


 // } Driver Code Ends


//User function template for C++

string ExcelColumn(int n) {
    string str = "";
    while (n > 0) { 
        int rem = n % 26; 
        if (rem == 0) { 
            str += 'Z'; 
            n = (n / 26) - 1; 
        } 
        else { 
            str += (rem - 1) + 'A'; 
            n = n / 26; 
        } 
    }
    reverse(str.begin(),str.end()); 
    return str; 
    // Your code goes here
}

// { Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<ExcelColumn(n)<<endl;
    }
    return 0;
}
      // } Driver Code Ends