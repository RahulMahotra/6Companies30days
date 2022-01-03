string encode(string src)
{     
    string str;
    int n = src.length();
    int cnt=1;
    
    for(int i=0; i<n; i++){
        
        while(src[i] == src[i+1]){
            cnt ++;
            i++;
        }
  
        str += ( src[i]+to_string(cnt) );
        cnt = 1;
        
    } 
    return str;
}  
