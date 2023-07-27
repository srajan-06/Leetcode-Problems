class Solution {
private:
    void dfs(vector<vector<int>>& isConnected,vector<int> &vis,int u,int nodes){
        vis[u] = 1;
        for(int v=0;v<nodes;v++){
            if(isConnected[u][v]==1 && u!=v){
                if(!vis[v]){
                    dfs(isConnected,vis,v,nodes);
                }
                
            }
        }
    } 
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int nodes = isConnected.size();
        vector<int> vis(nodes,0);
        int count = 0;
        for(int i=0;i<nodes;i++){
            if(!vis[i]){
                count++;
                dfs(isConnected,vis,i,nodes);
            }
        }
        return count;
        
    }
};
