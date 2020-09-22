// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/* Function to do DFS of graph

g : adjacency list of graph
N : number of vertices

return a list containing the DFS traversal of the given graph
*/
void depth(int u, vector<int> g[], vector<int> &visited, vector<int> &ans) { 
    ans.push_back(u);
    visited[u] = 1;
    for(auto node: g[u]) {
        if(!visited[node]) {
            visited[node] = 1;
            depth(node, g, visited, ans);
        }
    }
}

vector <int> dfs(vector<int> g[], int N) {
    vector<int> visited(N+1, 0);
    vector<int> ans;
    depth(0, g, visited, ans);
    return ans;
}

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {

        int N, E;
        cin>>N>>E;
        
        vector<int> g[N];
        bool vis[N];
        
        memset(vis, false, sizeof(vis));
        
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector <int> res = dfs(g, N);
        for (int i = 0; i < res.size (); i++)
            cout << res[i] << " ";
        cout<<endl;

    }
}  // } Driver Code Ends