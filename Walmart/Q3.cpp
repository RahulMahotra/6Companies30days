    bool winnerOfGame(string colors) {
        
        int cnt_a=0, cnt_b=0;
        int n = colors.size();
        
        int cnt=0;
        for(int i=0; i<n; i++){
            if(colors[i] == 'A') cnt++;
            else{
                if(cnt > 2) cnt_a += cnt - 2;
                cnt = 0;
            }    
        }
        
        if(cnt > 2) cnt_a += cnt - 2;
        
        cnt=0;
        for(int i=0; i<n; i++){
            if(colors[i] == 'B') cnt++;
            else{
                if(cnt > 2) cnt_b += cnt - 2;
                cnt = 0;
            }    
        }
        
        if(cnt > 2) cnt_b += cnt - 2;
        
        return cnt_a > cnt_b;
        
    }
