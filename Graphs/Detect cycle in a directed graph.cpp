// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/*  Function to check if the given graph contains cycle
*   V: number of vertices
*   adj[]: representation of graph
*/

bool dfsutil(vector<int>adj[], vector<int>&visited, vector<int>&visited_stack, int v){
    if(visited[v] == 1 && visited_stack[v] == 1){
        return true;
    }
 
    visited[v] = 1;
    visited_stack[v] = 1;
    int n = adj[v].size();
 
    for(int i=0; i<n; i++){
        int vertex = adj[v][i];
        if(dfsutil(adj, visited, visited_stack, vertex))
            return true;
    }
    visited_stack[v] = 0;
    return false;
 
}

bool isCyclic(int V, vector<int> adj[])
{
    vector<int> visited(V,0);
    for(int i=0;i<V;i++){
        if(visited[i]==0){
            vector<int> visited_stack(V,0);
            if(dfsutil(adj,visited,visited_stack,i)) return true;
        }
    }
    return false;
    // Your code here
}

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int v, e;
	    cin >> v >> e;
	    
	    vector<int> adj[v];
	    
	    for(int i =0;i<e;i++){
	        int u, v;
	        cin >> u >> v;
	        adj[u].push_back(v);
	    }
	    
	    cout << isCyclic(v, adj) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends