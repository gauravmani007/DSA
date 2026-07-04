class Solution {
public:

    void dfs(int u, unordered_map<int, vector<pair<int,int>>>&adj, vector<bool>&visited, int &ans){
        visited[u] = true;

        //neighbour

        for(auto &it : adj[u]){
            int v = it.first;
            int w = it.second;

            ans = min(ans, w);

            if(!visited[v]){
                dfs(v, adj, visited, ans);
            }
        }
    }

    int minScore(int n, vector<vector<int>>& roads) {
        
        //creating adjancy list
        unordered_map<int, vector<pair<int,int>>>adj;
        for(auto &it : roads){
            int u = it[0];
            int v = it[1];
            int w = it[2]; 

            adj[u].push_back({v,w});   
            adj[v].push_back({u,w});
        }

        vector<bool> visited(n, false);

        int ans = INT_MAX;
        
        dfs(1, adj, visited, ans);

        return ans;
    }
};