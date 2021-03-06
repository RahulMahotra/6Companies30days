   int power(int a, int b, int n){
    long long x=1, y=a; 
    while (b > 0) {
        if (b%2 == 1) {
            x = (x*y) % n;
        }
        y = (y*y) % n; 
        b /= 2;
    }
    return x % n;
}
  
    int kvowelwords(int N, int K) {
        
    long long int i,j;
    long long int MOD = 1000000007;
    long long int dp[N+1][K+1]={0};
    long long int sum=1;
    for(i=1;i<=N;i++)
      {
          dp[i][0]=sum*21;
          dp[i][0]%=MOD;
          sum=dp[i][0]; 
          
        for(j=1;j<=K;j++)
              {             

                if(j>i)
                    dp[i][j]=0;
                else if(j==i){
                    dp[i][j]=power(5,i,MOD);
                    dp[i][j] %= MOD;
                }
                else
                    dp[i][j]=dp[i-1][j-1]*5;
                
                dp[i][j]%=MOD;
              
                sum+=dp[i][j];
                sum%=MOD;
              }

        }
            
    
    return sum;
}
