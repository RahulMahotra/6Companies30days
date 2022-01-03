 int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        int cnt = 0;
        long long int p = 1;
        int i=0, j=0;
        
        for(; i<n; i++){
          
          p *= a[i];
          
            while(p>=k and j<i){
              p = p/a[j];
              j++;
            }
            
          if(p<k){
              cnt += (1 + (i-j));
          }
          
        }
        
        return cnt;
        
    }
