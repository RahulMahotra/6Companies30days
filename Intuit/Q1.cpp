int minDifference(int arr[], int n)  { 
	    
	    int i,j,sum=0;
	    
	    for(i=0; i<n; i++){
	        sum += arr[i];
	    }
	    
	    bool dp[n+1][sum+1];
	    
	    for(i=1; i<=sum; i++){
	        dp[0][i] = false;
	    }
	    
	    for(i=0; i<=n; i++){
	        dp[i][0] = true;
	    }

	    
	    for(i=1; i<=n; i++){
	    for(j=1; j<=sum; j++){
	        
	        if(arr[i-1] > j)
	            dp[i][j] = dp[i-1][j];
	        
	        else
	            dp[i][j] = dp[i-1][j] or dp[i-1][j-arr[i-1]];
	            
	        }
	    
      }

	    for(j=sum/2; j>=0; j--)
	    {
	       if(dp[n][j]){
	           return sum - 2*j;
	           }
	    }  
	} 
