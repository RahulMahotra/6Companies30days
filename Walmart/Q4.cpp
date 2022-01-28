void path(int sr, int sc, int cr, int cc, int &ans){
        
        if(sr == cr and sc == cc) ans++;
        
        if(cr>sr or cc>sc) return;
        
        path(sr,sc,cr+1,cc,ans);
        path(sr,sc,cr,cc+1,ans);
    }
    
    int NumberOfPath(int a, int b)
    {   
        int ans=0;
        path(a,b,1,1,ans);
        return ans;
    }
