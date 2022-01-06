int maxProfit(int k, int n, int arr[]) {
        
        int dp[k+1][n];
        memset(dp, 0, sizeof(dp));
  
        for(int i = 1; i<=k; i++){
            int mx = 0;
            for(int j = 1; j<n; j++){
                for(int k=j-1; k>=0; k--){
                    mx = max(mx, dp[i-1][k] + (arr[j] - arr[k]) );
                }
                dp[i][j] = max(mx, dp[i][j-1]);
            }
        }

        return dp[k][n-1];
       
    }
