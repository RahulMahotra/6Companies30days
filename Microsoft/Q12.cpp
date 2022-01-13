vector<vector<int> > fourSum(vector<int> &arr, int k) {
        
        int n = arr.size();
        int sum = 0;
        set<vector<int>> s;
        
        sort(arr.begin(), arr.end());
        
        for(int i=0; i<n-3; i++){
            
            for(int j=i+1; j<n-2; j++){
                
                sum = arr[i] + arr[j];
                    
                    int start = j+1;
                    int end = n-1;
                    
                    while(start < end){
                        
                        sum = arr[i] + arr[j] + arr[start] + arr[end];
                        
                        if(sum < k) start++;
                        
                        else if(sum > k) end--;
                        
                        else{
                            s.insert({arr[i], arr[j], arr[start], arr[end]});
                            start ++;
                            end--;
                        }
                }
                
            }
            
        }
        
        vector<vector<int>> ans;
        for(vector<int> v : s){
            ans.push_back(v);
        }
        
        return ans;
        
    }
