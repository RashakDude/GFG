// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long
queue<ll> modifyQueue(queue<ll> q, int k);
int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll n,k;
        cin>>n>>k;
        queue<ll> q;
        while(n-->0){
            ll a;
            cin>>a;
            q.push(a);
        }
        queue<ll> ans=modifyQueue(q,k);
        while(!ans.empty()){
            int a=ans.front();
            ans.pop();
            cout<<a<<" ";
        }
        cout<<endl;
    }
}// } Driver Code Ends


//User function Template for C++

queue<ll> modifyQueue(queue<ll> q, int k){
    stack<ll> st;
    while(k--){
        ll x = q.front();
        st.push(x);
        q.pop();
    }
    queue<ll> test;
    while(!q.empty()){
        ll x = q.front();
        test.push(x);
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    while(!test.empty()){
        q.push(test.front());
        test.pop();
    }
    return q;
    //add code here.
}