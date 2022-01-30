    int dp[501][501];
    int pick(vector<int>& piles, int i, int j){
        
        if(i>j) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int a = piles[i] + min(pick(piles, i+2, j),
                             pick(piles, i+1, j-1));
        
        int b = piles[j] + min(pick(piles, i+1, j-1),
                             pick(piles, i, j-2));
        
        return dp[i][j] = max(a, b);   
    }    
    bool stoneGame(vector<int>& piles) {
        
        memset(dp, -1, sizeof(dp));
        
        int sum=0;
        for(int i=0; i<piles.size(); i++) sum += piles[i];
    
        int sum_alice = pick(piles, 0, piles.size()-1);
        
        return sum_alice > sum/2 ;
        
    }
