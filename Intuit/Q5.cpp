class Solution {
public:
    int poss(vector<int>& nums, int mid, int l, int r, int m){
        
        int need=1;
        int n = nums.size();
        int sum = 0;
        
        for(int i=0; i<n; i++){
            sum += nums[i];
            if(sum > mid){
                need++;
                sum=nums[i];
            }
        }
        
        return need <= m;
        
    }
    
    
    int splitArray(vector<int>& nums, int m) {
        
        int n = nums.size();
        int r=accumulate(nums.begin(), nums.end(), 0);
        int l=*max_element(nums.begin(), nums.end());
        
        while(l<=r){     
            int mid = (r+l)/2;
            if(poss(nums, mid, l, r, m)) r=mid-1;
            else l=mid+1;
        }
        
        return l;
    }
};
