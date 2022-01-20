int dp[1001][1001];
    int max_a(vector<int> &arr,int i,int j){
        if(i>j) return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int x = arr[i] + min(max_a(arr,i+1,j-1),max_a(arr,i+2,j));
        int y = arr[j] + min(max_a(arr,i+1,j-1),max_a(arr,i,j-2));
        
        return dp[i][j]=max(x,y);
    }


    int maxCoins(vector<int>&arr,int n){
        memset(dp,-1,sizeof(dp));
        return max_a(arr,0,n-1);
    }
