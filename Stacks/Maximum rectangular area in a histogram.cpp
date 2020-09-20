// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return Maximum Rectangular area in a histogram
// arr[]: input array
// n: size of array
long getMaxArea(long long arr[], int n){
    stack<long> st;
    long maxarea=0,area=0;
    int i=0;
    while(i<n){
        if(st.empty() || arr[st.top()]<=arr[i]) st.push(i++);
        else{
            int t = st.top();
            st.pop();
            area = arr[t]*(st.empty() ? i : (i-st.top()-1));
            maxarea = max(area,maxarea);
        }
    }
    while(!st.empty()){
        int t = st.top();    
        st.pop();
        area = arr[t]*(st.empty() ? i : (i-st.top()-1));
        maxarea = max(area,maxarea);
    }
    return maxarea;
    // Your code here
}

// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        cout<<getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends