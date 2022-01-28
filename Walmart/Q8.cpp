 int height(int N){
        int n=0;
        while( N >= (n * (n+1) ) / 2 ) n++;
        return n-1;
    }
