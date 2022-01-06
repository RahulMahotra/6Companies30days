int longestMountain(vector<int>& arr) {
        
        int n = arr.size();
        int i=0, j=0, cnt=0, lgst=0;
        
        for(i=1; i<n-1; i++){
            
            if(arr[i] > arr[i-1] and arr[i] > arr[i+1]){
                
                j=i;
                cnt=1;
                
                while(j>0 and arr[j-1] < arr[j]){
                    cnt++;
                    j--;
                }
                
                while(i<n-1 and arr[i] > arr[i+1]){
                    i++;
                    cnt++;
                }
                
                lgst = max(lgst, cnt);
                
            }
            
        }
        
        return lgst;
        
    }
