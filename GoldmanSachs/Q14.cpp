 int minSubArrayLen(int target, vector<int>& nums) {
        
        int ans=INT_MAX;
        
        int start=0, end=0, sum=0;
        
        while(end < nums.size()){
            
            sum += nums[end];
            
            while(sum >= target and start <= end){
                
                ans = min(ans,end-start+1);
                sum -= nums[start++];
            
            }
               
            end++;
        }
        
        return (ans==INT_MAX) ? 0 : ans;
    }
