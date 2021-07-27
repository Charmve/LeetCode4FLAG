class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size() == 0)
            return 0;
        
        int num_islands = 0;
        for(int i = 0; i < grid.size(); i++)
            for(int j = 0; j < grid[0].size(); j++)
            {
                if(grid[i][j] == '1'){
                    ++num_islands;
                    dfs(grid, i ,j);
                }
            }
        return num_islands;
    }

    void dfs(vector<vector<char>> &grid, int r, int c)
    {
        grid[r][c] = '2';

        if (r - 1 >= 0 && grid[r-1][c] == '1') dfs(grid, r - 1, c);
        if (r + 1 < grid.size() && grid[r+1][c] == '1') dfs(grid, r + 1, c);
        if (c - 1 >= 0 && grid[r][c-1] == '1') dfs(grid, r, c - 1);
        if (c + 1 < grid[0].size() && grid[r][c+1] == '1') dfs(grid, r, c + 1);
    }

    bool isInArea(vector<vector<char>> grid, int r, int c)
    {
        return r >= 0 && r < grid.size()
            && c >= 0 && c < grid[0].size();
    }
};

// https://leetcode-cn.com/problems/number-of-islands/solution/dao-yu-lei-wen-ti-de-tong-yong-jie-fa-dfs-bian-li-/
