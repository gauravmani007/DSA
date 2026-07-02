class Solution {
public:
    int n, m;
    vector<vector<int>>directions{{1,0},{-1,0},{0,1},{0,-1}};

    bool findSafeWalk(vector<vector<int>>& grid, int health) {
         
        m = grid.size();
        n = grid[0].size();

        deque<pair<int,int>>que;
        vector<vector<int>>result(m, vector<int>(n, INT_MAX));

        result[0][0] = grid[0][0];
        que.push_front({0,0});



        if(grid[0][0] == 1 && health == 1){
            return false;
        }
       
        int level = 0;

        while(!que.empty()){
            
            auto[r,c] = que.front();
            que.pop_front();

            for(auto &dir : directions){
                int nr = r + dir[0];
                int nc = c + dir[1];

                if(nr < 0 || nr >= m || nc < 0 || nc >= n) continue;

                if(result[r][c] + grid[nr][nc] < result[nr][nc]){
                    result[nr][nc] = result[r][c] + grid[nr][nc];
                
                if(grid[nr][nc] == 0){
                    que.push_front({nr,nc});
                }else{
                    que.push_back({nr,nc});
                }
                     
                } 
            }

        }

    
int x = result[m-1][n-1];

return health - x >= 1; 


    }
};