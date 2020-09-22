// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


/* This function is used to detect a cycle in undirected graph

*  g[]: array of vectors to represent graph
*  V: number of vertices
*/
bool bfs(vector<int>g[], int s, bool *vis){
    queue<pair<int, int> > q;
    q.push(make_pair(s, -1));
    vis[s] = true;
   
    while(!q.empty()){
        int len = q.size();
        while(len--){
            pair<int, int> u = q.front();
            q.pop();
            for(int v: g[u.first]){
                if(vis[v] == true && v != u.second)
                    return true;
                else if(!vis[v]){
                    vis[v] = true;
                    q.push(make_pair(v, u.first));
                }
                
            }
        }
    }
   return false;
}

bool isCyclic(vector<int> g[], int V) {
   // Your code here
    bool vis[V+1];    
    memset(vis, false, sizeof(vis));
    for(int i=0; i<V; i++){
        if(!vis[i] && bfs(g, i, vis)) return true;
    }
    return false;
    
}

// { Driver Code Starts.


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int V, E;
        cin>>V>>E;
        
        // array of vectors to represent graph
        vector<int> adj[V];
        
        int u, v;
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            
            // adding edge to the graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        cout << isCyclic(adj, V)<<endl;

    }
}
  // } Driver Code Ends