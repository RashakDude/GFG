// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


/*  Function to find the number of strongly connected components
*   using Kosaraju's algorithm
*   V: number of vertices
*   adj[]: array of vectors to represent graph
*/
void DFSRec(vector<int> adj[], int s, stack<int> &st, bool visited[])
{
    visited[s] = true;
    
    for(int u : adj[s])
    {
        if(visited[u] == false)
        {
            DFSRec(adj, u, st, visited);
        }
    }
    
    st.push(s);
}

void DFS(vector<int> adj[], int V, stack<int> &st)
{
    bool visited[V];
    fill(visited, visited+V, false);
    
    for(int i = 0; i < V; i++)
    {
        if(visited[i] == false)
        {
            DFSRec(adj, i, st, visited);
        }
    }
}

void DFSRec1(vector<int> revadj[], int s, bool visited[])
{
    visited[s] = true;
    
    for(int u : revadj[s])
    {
        if(visited[u] == false)
        {
            DFSRec1(revadj, u, visited);
        }
    }
}

int kosaraju(int V, vector<int> adj[])
{
    stack<int> st;
    
    DFS(adj, V, st);
    
    //Reverse Edges
    vector<int> revadj[V];
    for(int v = 0; v < V; v++)
    {
        for(int u: adj[v])
        {
            revadj[u].push_back(v);
        }
    }
    
    //printStack(st);
    int count = 0;
    bool visited[V];
    fill(visited, visited+V, false);
    while(!st.empty())
    {
        int v = st.top();
        st.pop();
        
        if(visited[v] == false)
        {
            DFSRec1(revadj, v, visited);
            count++;
        }
    }
    
    return count;
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int m, n;
        vector<int> adj[a];
        for (int i = 0; i < b; i++) {
            cin >> m >> n;
            adj[m].push_back(n);
        }
        cout << kosaraju(a, adj) << endl;
    }
    return 0;
}
  // } Driver Code Ends