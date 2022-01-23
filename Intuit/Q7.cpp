 bool days_required(vector<int>&weights, int mid, int n, int days)
    {
        int c=0, total_days=0;
        
        for(int i=0; i<n; i++){
            c += weights[i];
            if(c>mid)
            {
                total_days++;
                c = weights[i];
            }
        }
        
        if(total_days<days) return true;
        
        return false;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        int n = weights.size(), mx = INT_MIN, sum=0;
        
        for(int i=0; i<n; i++){
            sum += weights[i];
            mx = max(mx, weights[i]);
        }
        
        int low = mx, high = sum;
        
        while(low<=high){
            
            int mid = low + (high-low)/2;
            
            if(days_required(weights, mid, n, days)) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
