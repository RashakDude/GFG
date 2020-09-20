// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//Back-end complete function Template for C++

long maximum_sum(vector<int>v,int k){
    int n;
    n=v.size();
    unordered_map<int,int>m1;
    int i;
    long sum=0;
    for(i=0;i<n;i++)
    {
        m1[v[i]]++;
    }
    priority_queue<pair<int,int>>pq;
    
    for(auto i:m1)
    {
        pq.push({i.second,i.first});
    }
    
    int c=0;
    while(c<k)
    {
        pair<int,int>p;
        p=pq.top();
        pq.pop();
        p.first--;
        sum+=p.second;
        if(p.first)
        {
            pq.push(p);
        }
        c++;
    }
    return sum;
   // Your code here
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n,0);
        
        for(int i=0;i<n;i++)
        cin>>v[i];
        
        cout<< maximum_sum(v,k)<<endl;
    }
    return 0;
}
  // } Driver Code Ends