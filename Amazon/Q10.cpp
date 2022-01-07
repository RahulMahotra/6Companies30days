void matchPairs(char nuts[], char bolts[], int n) {
	    
	    pair<char, int> arr[9] = 
	    { {'!',0},{'#',0},{'$',0},{'%',0},{'&',0},
	    {'*',0},{'@',0},{'^',0},{'~',0} };
	    
	    for(int i = 0; i<n; i++){
	        
	        for(pair<char,int> &p : arr){
	            if(nuts[i] == p.first) p.second = p.second++;
	        }
	        
	    }
	    
	    int k = 0;
	    for(int i=0; i<9; i++){
	        if(arr[i].second > 0){
	            nuts[k] = arr[i].first;
	            bolts[k] = arr[i].first;
	            k++;
	        }
	    }
	    
	    
	}
