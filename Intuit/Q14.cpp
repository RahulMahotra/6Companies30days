int maxDistance(vector<vector<int>>& grid) {
      int m=grid.size();
    int n=grid[0].size();
    
    vector<vector<int>>dis(m,vector<int>(n,1e6));
    
    int land=0,water=0;
    
    queue<pair<int,int>>q;
    
    for(int i=0;i<m;i++){
        
        for(int j=0;j<n;j++){
            
            if(grid[i][j]==1){
                dis[i][j]=0;
                q.push({i,j});
                land++;
            }
            
            else{
                water++;
            }
            
        }
        
    }
    
    
    if(land==0 || water==0){
        return -1;
    }
    
    int maxi=-1;
    
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,1,-1};
    
    while(!q.empty()){
        
        auto curr=q.front();
        q.pop();
        
        int x=curr.first;
        int y=curr.second;
        
        for(int i=0;i<4;i++){
            
            int x1=x+dx[i];
            int y1=y+dy[i];
            
            if(x1>=0 && x1<m && y1>=0 && y1<n && dis[x1][y1]>dis[x][y]+1){
                
                dis[x1][y1]=dis[x][y]+1;
                q.push({x1,y1});
                
            }
            
        }
        
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           
            maxi=max(maxi,dis[i][j]);
            
        }
    }
    
    return maxi;
    
    }
