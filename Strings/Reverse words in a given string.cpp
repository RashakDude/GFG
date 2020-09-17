// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s);
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        cout<<reverseWords(s)<<endl;
    }
}// } Driver Code Ends



string reverseWords(string s) 
{
    vector<string> v;
    string c = "";
    for(int i=0;i<s.length();i++){
        if(s[i]=='.'){
            v.push_back(c);
            c = "";
        }
        else c += s[i];
    }
    v.push_back(c);
    reverse(v.begin(),v.end());
    string ans="";
    for(int i=0;i<v.size()-1;i++) ans += v[i]+'.';
    ans += v[v.size()-1];
    return ans;
    
    // code here 
} 