bool canPair(vector<int> nums, int k) {
        
        int n = nums.size(), ans=0;
        
        if(n%2 != 0) return false;
        
        unordered_map<int,int> mp;
        
        for(int i=0; i<n; i++) mp[nums[i] % k]++;
         
        for(auto it : mp) {
            
            if(it.first == 0){
             if(it.second % 2 != 0) return false;   
            }
            else{
            if( mp[it.first] != mp[k-it.first] ) return false;
            }
        } 
    
        return true;
        
        
    }
