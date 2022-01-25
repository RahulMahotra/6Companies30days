   int minSwaps(vector<vector<int>>& grid) {
       
        int n = grid.size();
        int zeros[n];
        memset(zeros, 0, sizeof(zeros));
        
        for(int i=0; i<n; i++){
            
            for(int j=n-1; j>=0; j--){
                
                if(grid[i][j] == 0)
                    zeros[i]++;
                else
                    break;  
            }
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            
            int req = n-1-i;
            int k = i;
            
            while(k<n and zeros[k] < req){
                k++;
            }
            
            if(k==n) return -1;
            
            ans += k-i;
            
            while(k > i){
                swap(zeros[k], zeros[k-1]);
                k--;
            }
            
            
        }
        
        return ans;
        
        
    }
