string amendSentence (string s)
    {
        
        int n = s.length(), i=0;
        string ans;
        
       for(int i=0; i<n; i++){
           
           if(s[i] >= 'a' and s[i] <= 'z') ans.push_back(s[i]);
           
           else{
                if(i>0)
                ans.push_back(' ');
                
                ans.push_back(tolower(s[i]));
           }
           
       }
        
        return ans;
    }
