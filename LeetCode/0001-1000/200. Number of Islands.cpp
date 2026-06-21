class Solution {
private:
    void bfs(int i, int j, vector<vector<char>>& grid, vector<vector<int>>& visited){
        visited[i][j] = 1;
        queue<pair<int,int>> q;
        q.push({i,j});
        int n = grid.size();
        int m = grid[0].size();

        while(!q.empty()){
            int i = q.front().first;
            int j = q.front().second;
            q.pop();

            //traverse the naighbour land and mark them
            // Up
            if(i-1 >= 0 && grid[i-1][j] == '1' && !visited[i-1][j]){
                visited[i-1][j] = 1;
                q.push({i-1, j});
            }
            // down
            if(i+1 < n && grid[i+1][j] == '1' && !visited[i+1][j]){
                visited[i+1][j] = 1;
                q.push({i+1, j});
            }
            // left
            if(j-1 >= 0 && grid[i][j-1] == '1' && !visited[i][j-1]){
                visited[i][j-1] = 1;
                q.push({i, j-1});
            }
            // right
            if(j+1 < m && grid[i][j+1] == '1' && !visited[i][j+1]){
                visited[i][j+1] = 1;
                q.push({i, j+1});
            }
        }

    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));
        int island = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] =='1' && !visited[i][j]){
                    island++;
                    bfs(i, j , grid, visited);
                }
            }
        }
        return island;
    }
};