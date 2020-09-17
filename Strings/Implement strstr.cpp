// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


/* The function should return position where the target string 
   matches the string str
Your are required to complete this method */
int strstr(string s, string x)
{
    int n=s.length();
    int m=x.length();
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(s[i-1]==x[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            if(dp[i][j] == m) return i-m;
        }
    }
    return -1;
     //Your code here
}