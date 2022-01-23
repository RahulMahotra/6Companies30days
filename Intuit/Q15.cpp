int minEatingSpeed(vector<int>& piles, int h) {
        
        int n = piles.size();

        int l=1, r=1000000000;
        
        while(l <= r){
  
            int cnt = 0;
            int mid = (r+l) / 2 ;
            
            for(int i=0; i<n; i++)
                cnt += ceil(1.0 * piles[i] / mid);
            
            if(cnt <= h) r = mid-1;
            else  l = mid+1;
        
        }
        
        return l;
   
    }    
