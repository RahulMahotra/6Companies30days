 vector<int> subarraySum(int arr[], int n, long long s)
    {
  
        int j = 0, sum = 0, i = 0;
        
        while(i < n){
            
            sum+=arr[i];
            
            if(sum == s){
                return {j+1,i+1};
            }
            
            if(sum > s){
                while(sum > s){
                    sum-=arr[j];
                    j++;
                    if(sum == s){
                        return {j+1,i+1};
                    }
                }
            }
            i++;
        }
        
        return {-1};
    }
