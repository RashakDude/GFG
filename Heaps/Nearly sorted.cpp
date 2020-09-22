// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



vector <int> nearlySorted(int arr[], int num, int K){
    vector <int> res;
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr+K); 
	  for(int i = K; i<num; ++i){
	        res.push_back (pq.top ());
	        pq.pop();
	        pq.push(arr[i]);
	    }
	    while(!pq.empty()){
	        res.push_back (pq.top ());
	        pq.pop();
	    }
	    return res;
    // Your code here
}

// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num, K;
	    cin>>num>>K;
	    
	    int arr[num];
	    for(int i = 0; i<num; ++i){
	        cin>>arr[i];
	    }
	    
	    vector <int> res = nearlySorted(arr, num, K);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	        
	    cout<<endl;
	}
	
	return 0;
}
  // } Driver Code Ends