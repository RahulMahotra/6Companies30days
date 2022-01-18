int lengthOfLongestAP(int arr[], int n) {
        
        if(n<3) return n;
        
        int mxcnt=2;
        
        vector<unordered_map<int, int>> dp(n);
        
        for(int i=0; i<n; i++){
            
            for(int j=i+1; j<n; j++){
                
                int diff = arr[j] - arr[i];
                
                if(dp[i].find(diff) != dp[i].end()){
                    dp[j][diff] = dp[i][diff] + 1;
                }
                else{
                    dp[j][diff] = 2;
                }
                
                mxcnt = max(mxcnt, dp[j][diff]);
                
            }
            
            
        }
        
        return mxcnt;
        
    }
