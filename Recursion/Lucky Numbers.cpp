// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
#define ll long long 
using namespace std;



 // } Driver Code Ends


//User-function template for C++

// Complete the function
// n: Input n
// counter: variable has already been declared in driver code and initialized as 2
// Return True if the given number is a lucky number else return False

bool isLucky(int n, int &counter) {
    int next_position = n;  
    if(counter > n) return true;  
    if(n % counter == 0) return false;  
    next_position -= next_position / counter;  
    counter++;  
    return isLucky(next_position,counter);
    // add code here
}

// { Driver Code Starts.

/*Driver function to test above function*/
int main() {
    int t;
    cin >> t;//testcases
    while(t--) {
        int n;
        cin>>n;//input n
        int counter = 2;
        
        //calling isLucky() function
        if(isLucky(n, counter))
            cout<<"1\n";//printing "1" if isLucky() returns true
        else
            cout<<"0\n";//printing "0" if isLucky() returns false
    }
    return 0;
}  // } Driver Code Ends