  int CountPath(vector<vector<int>>&obs,int i,int j,int n,int m){
        if(i>=n or j>=m or obs[i][j]!=0){
            return 0;
        }
        if( i == n-1 and j == m-1){
            return 1;
        }
        return CountPath(obs,i+1,j,n,m) + CountPath(obs,i,j+1,n,m);
    }   
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        return CountPath(obstacleGrid,0,0,n,m);
    }
