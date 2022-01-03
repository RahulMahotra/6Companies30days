vector<vector<string> > Anagrams(vector<string>& string_list) {
        
        int n = string_list.size();
        
        unordered_map<string, vector<string>> mp;
        
        for(int i=0; i<n; i++){
            
            string temp = string_list[i];
            
            sort(temp.begin(),temp.end());
            
            mp[temp].push_back(string_list[i]);
           
        }
       
        vector<vector<string>> ans;
        
        for(auto it : mp){
            ans.push_back(it.second);
        }
        
        return ans;
        
    }
