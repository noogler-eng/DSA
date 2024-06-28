class Solution {
public:
    void dfs(int node, vector<vector<int>> &adj, vector<int> &vis){
        if(vis[node] == 1){
            return;
        }
        vis[node] = 1;
        for(auto i: adj[node]){
            if(vis[i] == 0){
                dfs(i, adj, vis);
            }
        }
    }

    int findCircleNum(vector<vector<int>> &isConnected) {
        int count = 0;
        int n = isConnected.size();
        vector<vector<int>> adj(n);
        vector<int> vis(n, 0);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(isConnected[i][j]!=0){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        int no = 0;
        for(int i=0; i<n ; i++){
            if(vis[i] == 0){
                dfs(i, adj, vis);
                no++;
            }
        }
        return no;
    }
};