int atoi(string str){
        
        int ans = 0,  sgn=1, i=0; // Initialize result

        if(str[0] == '-'){ 
            sgn = -1;
            i++;
        }
        
        for (i; str[i] != '\0'; ++i){
            
            if(str[i] >='0' && str[i] <= '9')   
                ans = ans*10 + str[i] - '0';
            
            else return -1;
        }
        
        return ans*sgn;
    }
