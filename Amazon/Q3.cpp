vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        
        deque<int> dq;
        vector<int> ans;
        
        for(int i=0; i<k; i++){
            
            while(!dq.empty() and arr[dq.back()] <= arr[i]) 
                dq.pop_back();
            
            dq.push_back(i);
            
        }
        
        for(int i=k; i<n; i++){
            
            ans.push_back(arr[dq.front()]);
            
            while(!dq.empty() and dq.front() <= i-k)
                dq.pop_front();
            
            while(!dq.empty() and arr[dq.back()] <= arr[i] )
                dq.pop_back();
            
            dq.push_back(i);
            
        }
        
        ans.push_back(arr[dq.front()]);
        return ans;
    
        
    }
