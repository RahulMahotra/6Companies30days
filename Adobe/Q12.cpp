vector<int> leaders(int arr[], int n){
        
        if(n==1) return arr[0];
        
        vector<int> ans;
        int mx = INT_MIN;

        for(int i=n-1; i>=0; i--){
            if(arr[i] >= mx){
                ans.push_back(arr[i]);
                mx = arr[i];
            }
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
