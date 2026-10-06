class Solution {
public:
    void dfs(int n, int m,vector<vector<char>>& grid){
        if(n<0||grid.size()<=n||m<0||grid[0].size()<=m||grid[n][m]=='0')
            return;
        grid[n][m]='0';
        dfs(n - 1, m, grid);
        dfs(n + 1, m, grid);
        dfs(n, m-1, grid);
        dfs(n, m+1, grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int islands=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    islands++;
                    dfs(i,j,grid);
                }
            }
        }
        return islands;
    }
};
