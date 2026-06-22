class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<int>& visited){
        visited[node] =1 ;

        for(auto it : adj[node]){
            if(!visited[it]){
                dfs(it, adj, visited);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination) return true;
        vector<vector<int>> adj(n);
        vector<int> visited(n);

        for(int i=0; i<edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        dfs(source, adj, visited);

        return visited[destination];
    }
};