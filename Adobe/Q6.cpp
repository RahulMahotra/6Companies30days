vector<string> ans;
    void gp(int n, int open, int close, string str){
        
        if(open + close == 2*n){
            ans.push_back(str);
            return;
        }    
        
        if(open < n){
            gp(n, open+1, close, str+"(");
        }
        
        if(close < open){
            gp(n, open, close+1, str+")"); 
        }
        return;
    }
    
    vector<string> AllParenthesis(int n) 
    {
       gp(n, 0, 0, "");
       return ans;
    }
