// { Driver Code Starts
// C++ program to evaluate value of a postfix expression
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// The main function that returns value of a given postfix expression
int evaluatePostfix(string &str){
    stack<int> s;
    for (int i = 0; i<str.size(); ++i){
        if (isdigit(str[i])) s.push(str[i] - '0');
        else{
            int val1 = s.top(); s.pop();
            int val2 = s.top(); s.pop();
            switch (str[i])
            {
             case '+': s.push(val2 + val1); break;
             case '-': s.push(val2 - val1); break;
             case '*': s.push(val2 * val1); break;
             case '/': s.push(val2 / val1); break;
            }
        }
    }
    return s.top();
    // Your code here
}


// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string str;
        cin>>str;
    
    cout<<evaluatePostfix(str)<<endl;
    }
    return 0;
}
  // } Driver Code Ends