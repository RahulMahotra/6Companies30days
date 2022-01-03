 string printMinNumberForPattern(string s){
        int num=1;
        stack<int> st;
        string str;
        
        int n = s.length();
        
        for(int i=0; i<n; i++){
            
            st.push(num++);
        
            if(s[i] == 'I'){
                while(!st.empty()){
                  str += to_string(st.top());
                  st.pop();
              }
            }
            
        }
        st.push(num);
         while(!st.empty()){
                  str += to_string(st.top());
                  st.pop();
              }
        
        return str;      
        
        
    }
