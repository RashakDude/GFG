// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

vector<int> TopK(vector<int>& array, int k) ;


 // } Driver Code Ends


//User function Template for C++

vector<int> TopK(vector<int>& array, int k) 
{
    vector<int>v;
    unordered_map<int,int>um;
    for(int i=0;i<array.size();i++) um[array[i]]++;
    priority_queue<pair<int,int>>pq;
    for(auto x:um) pq.push({x.second,x.first});
    while(k--){
        v.push_back(pq.top().second);
        pq.pop();
    }
    return v;
    
}

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k ;
        cin>>n;
        vector <int> array(n);

        for(int i=0; i<n; i++)
            cin>>array[i];
        cin>>k;

        vector<int> result = TopK(array,k);
        
        for(int i=0; i<result.size();i++)
            cout<<result[i]<<" ";

        cout<<"\n";

    }
    return 0;
}  // } Driver Code Ends