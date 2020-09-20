// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return if the paranthesis are balanced or not
bool ispar(string expr){
    stack<char> s; 
    char x; 
    for (int i = 0; i < expr.length(); i++) { 
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{') { 
            s.push(expr[i]); 
            continue; 
        } 
        if (s.empty()) return false; 
        switch (expr[i]) { 
        case ')': 
            x = s.top(); 
            s.pop(); 
            if (x == '{' || x == '[') return false; 
            break; 
        case '}': 
            x = s.top(); 
            s.pop(); 
            if (x == '(' || x == '[') return false; 
            break; 
        case ']': 
            x = s.top(); 
            s.pop(); 
            if (x == '(' || x == '{') return false; 
            break; 
        } 
    } 
    return (s.empty());
    // Your code here
}


// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends