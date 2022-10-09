class Solution {
private:
    int dp[51][51][2501];
    int visited[51][51];
public:
    int solve(int i, int j, vector<vector<int>> &grid, int time){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || visited[i][j]){
            return INT_MAX;
        }
        
        if(i==(grid.size()-1) && j==(grid[0].size()-1)){
            return time+max(grid[i][j]-time, 0);
        }
        
        if(dp[i][j][time] != -1){
            return dp[i][j][time];
        }
        
        visited[i][j] = 1;
        
        int right = solve(i, j+1, grid, time + max(grid[i][j]-time, 0)); 
        int bottom = solve(i+1, j, grid, time + max(grid[i][j]-time, 0));  
        int left = solve(i, j-1, grid, time + max(grid[i][j]-time, 0)); 
        int top = solve(i-1, j, grid, time + max(grid[i][j]-time, 0));
        
        visited[i][j] = 0;
        
        return dp[i][j][time] = min({right, bottom, left, top});
    }
    int swimInWater(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        memset(visited, 0, sizeof(visited));
        memset(dp, -1, sizeof(dp));
        
        return solve(0, 0, grid, 0);
    }
};
