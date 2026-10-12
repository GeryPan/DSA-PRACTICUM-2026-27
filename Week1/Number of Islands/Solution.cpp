class Solution {
public:
    void mark(vector<vector<char>>& grid, int i, int j) {
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[i].size()) {
            return;
        }
        
        if(grid[i][j] != '1') {
            return;
        }
        
        grid[i][j] = '0';
        mark(grid, i + 1, j); //up
        mark(grid, i - 1, j); //down
        mark(grid, i, j + 1); //right
        mark(grid, i, j - 1); //left
    }

    int numIslands(vector<vector<char>>& grid) {
        int result = 0;
        for(size_t i = 0; i < grid.size(); i++) {
            for(size_t j = 0; j < grid[i].size(); j++) {
                if(grid[i][j] == '1') {
                    mark(grid, i, j);
                    result++;
                }
            }
        }
        return result;
    }
};
