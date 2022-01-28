    const long long md = 1e9 + 7; 
    long long power(int N,int R){
        
       if(R == 0) return 1;
    
       long long ans = power(N, R/2) % md;
       
       ans = (ans*ans) % md;
       
       if (R%2 == 0) return ans;
       else return (ans*N) % md;
        
    }
