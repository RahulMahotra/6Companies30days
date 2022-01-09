vector<vector<string>> displayContacts(int n, string contact[], string s)
{
        int len = s.length();
        vector<vector<string>> ans;
    
        for(int i=1; i<=len; i++){
            
            string str = s.substr(0,i);
            vector<string> v;
            unordered_set<string> s;
            for(int j=0; j<n; j++){
                
                if(str == contact[j].substr(0,i)){
                    if(s.find(contact[j]) == s.end())
                    v.push_back(contact[j]); 
                }
                s.insert(contact[j]);
                
            }
            sort(v.begin(), v.end());
            if(v.size() == 0) {
                ans.push_back({"0"});
            }
            else ans.push_back(v);
        }
        
        return ans;
}
