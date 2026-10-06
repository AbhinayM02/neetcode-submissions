class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        if(grid.empty())return 0;
        int m=grid.size();
        int n=grid[0].size();
        int peri=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){peri+=4;
                if(j+1<n && grid[i][j+1]==1)peri=peri-2;
                if(i+1<m && grid[i+1][j]==1)peri=peri-2;}
            }
        }
        return peri;
    }
};