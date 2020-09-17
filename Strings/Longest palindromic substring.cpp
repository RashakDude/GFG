// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>

using namespace std;

string longestPalindrome(string);

// Your code will be pasted here

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << longestPalindrome(str) << endl;
    }
    return 0;
}// } Driver Code Ends


// User function template for C++

// A : given string
// return the required string
string longestPalindrome(string A) {
    int i, high, low, len, start = 0, max = 1, even = 0;
    len = A.size();
    if (len % 2 == 0) even = 1;
    for (i = 1; i < len; i++) {
        low = i - 1;
        high = i;
        while (low >= 0 && high < len && A[low] == A[high]) {
            if (high - low + 1 > max) {
                max = high - low + 1;
                start = low;
            }
            --low;
            ++high;
        }
        low = i - 1;
        high = i + 1;
        while (low >= 0 && high < len && A[low] == A[high]) {
            if (high - low + 1 > max) {
                max = high - low + 1;
                start = low;
            }
            --low;
            ++high;
        }
    }
    return A.substr(start, max);
    // code here
}