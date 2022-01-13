 vector <int> calculateSpan(int price[], int n)
    {  
        stack<pair<int,int>> st;
        vector<int> v;
        
        for(int i=0; i<n; i++){
            
            while(!st.empty() and st.top().first <= price[i]) st.pop();
            
            if(st.empty()) v.push_back(i+1);
            else v.push_back(i-st.top().second);
            
            st.push( {price[i],i} );
            
        }
        
        return v;
    }
