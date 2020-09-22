// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector <int> dijkstra(vector<vector<int>> , int ,int );

int printSolution(vector <int> dist, int n)
{
  
   for (int i = 0; i < n; i++)
      printf("%d ", dist[i]);
  
}
int main()
{
    int t;
    int V;
    cin>>t;
    while(t--){
        cin>>V;
        
        vector<vector<int>> g(V);
        
        for(int i = 0;i<V;i++){
            vector<int> temp(V);
            g[i] = temp;
        }
        
        for(int i=0;i<V;i++)
        {
      	    for(int j=0;j<V;j++)
      	    {
      		    cin>>g[i][j];
      	    }
        }
        
        int s;
        cin>>s;
        
        vector <int> res = dijkstra(g, s, V);
        printSolution (res, V);
        cout<<endl;
       }
        return 0;
}// } Driver Code Ends


/*  Function to implement Dijkstra
*   g: vector of vectors which represents the graph
*   src: source vertex to start traversing graph with
*   V: number of vertices
*/
vector <int> dijkstra(vector<vector<int>> g, int src, int V)
{
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;
    vector<bool> fin(V, false);
    for(int count = 0; count < V-1; count++) {
        int u = -1;
        for(int i = 0; i < V; i++) {
            if(!fin[i] && (u == -1 || dist[i] < dist[u])) u = i;
        }
        fin[u] = true;
        for(int v = 0; v < V; v++) {
            if(g[u][v] != 0 && fin[v] == false) dist[v] = min(dist[v], dist[u] + g[u][v]);
        }
    }
    return dist;
    // Your code here
}