class Solution {
private:
    void bfs(vector<vector<char>> &grid,vector<vector<int>> &vis,int n,int m,int n1,int m1){
        vis[n][m] = 1;
        queue<pair<int,int>> q;
        vector<pair<int, int>> dir = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
        q.push({n,m});
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(auto ele : dir){
                    int nrow = row+ele.first;
                    int ncol = col+ele.second;
                    if(nrow>=0 && nrow<n1 && ncol>=0 && ncol<m1 && grid[nrow][ncol]=='1' 
                        && !vis[nrow][ncol]){                        
                        vis[nrow][ncol] = 1;
                        q.push({nrow,ncol});
                    }

        }
    }
}
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int count = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    count += 1;
                    bfs(grid,vis,i,j,n,m);
                }
            }
        }
        return count;
        
    }
};
