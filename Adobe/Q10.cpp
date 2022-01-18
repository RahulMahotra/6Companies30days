 vector<string> winner(string arr[],int n)
    {
        map<string, int> mp;
        
        for(int i=0; i<n; i++){
            
            mp[arr[i]]++;
            
        }
        
        int mx = INT_MIN;
        string str;
        vector<string> ans;
        
        for(auto x : mp){
            if(x.second > mx){ 
                mx = x.second;
                str = x.first;
                
            }
        }
        
        ans.push_back(str);
        ans.push_back(to_string(mx));
        
        return ans;
    }
