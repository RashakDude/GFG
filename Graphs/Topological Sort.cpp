// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

vector <int> topoSort(int N, vector<int> adj[]);

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
bool check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return false;
        }
    }
    return true;
}

// Driver Code
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }

        vector <int> res = topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
}// } Driver Code Ends


// The Graph structure is as folows

/*  Function which sorts the graph vertices in topological form
*   N: number of vertices
*   adj[]: input graph
*/
void DFSUtil (int i, vector <int> g[], bool vis[], vector <int> &res){
    vis[i] = true;
    for (int j : g[i]) if (!vis[j]) DFSUtil (j, g, vis, res);
    res.push_back (i);
}

vector<int> topoSort(int N, vector<int> g[]) {
    bool vis[N];
    memset (vis, false, sizeof (vis));
    vector <int> res;
    for (int i = 0;i < N; i++) if (!vis[i]) DFSUtil (i, g, vis, res);
    reverse(res.begin(),res.end());
    return res;
}
