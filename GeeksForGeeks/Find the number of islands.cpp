class Solution {
  public:
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
            for(int di = -1; di<=1; di++){
                for(int dj = -1; dj<=1; dj++){
                    int nrow = i + di;
                    int ncol = j + dj;
                    if(nrow >=0 && nrow < n && ncol >= 0 && ncol < m &&
                     grid[nrow][ncol] == 'L' && !visited[nrow][ncol]){
                        visited[nrow][ncol] = 1;
                        q.push({nrow, ncol});
                    }
                }
            }
        }

    }
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));
        int island = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] =='L' && !visited[i][j]){
                    island++;
                    bfs(i, j , grid, visited);
                }
            }
        }
        return island;
    }
};