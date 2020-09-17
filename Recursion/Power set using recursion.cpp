// { Driver Code Starts
//Initial Template for C++


// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//Complete this function
void power(vector<string> &res, string str, int index=-1, string curr=""){
    int n = str.length(); 
    if (index == n) return;
    res.push_back(curr);
    for (int i = index + 1; i < n; i++) { 
        curr += str[i]; 
        power(res, str, i, curr); 
        curr.erase(curr.size() - 1); 
    } 
    return;
}

vector <string> powerSet(string s){
    vector<string> res;
    int index = -1;
    string curr = "";
    power(res,s,index,curr);
    return res;
   //Your code here
}


// { Driver Code Starts.


// Driver code
int main()
{
    int T;
    cin>>T;//testcases
    while(T--)
    {
        string s;
        cin>>s;//input string
        
        //calling powerSet() function
        vector<string> ans = powerSet(s);
        
        //sorting the result of the powerSet() function
        sort(ans.begin(),ans.end());
        
        //printing the result
        for(auto x:ans)
        cout<<x<<" ";
        cout<<endl;
        
        
    }

return 0;
}   // } Driver Code Ends