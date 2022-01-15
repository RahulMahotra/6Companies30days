 vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int dir=0; // 0=l-r  1=t-b 2=r-l 3=b-t
        int top = 0, bottom = r-1, left = 0, right = c-1;
        vector<int> ans;
        
        while(top<=bottom and left<=right){
            
            if(dir == 0){
                for(int i=left; i<=right; i++){
                    ans.push_back(matrix[top][i]);
                }
            top++;    
            }
            else if(dir == 1){
                for(int i=top; i<=bottom; i++){
                    ans.push_back(matrix[i][right]);
                }
            right --;    
            }
             else if(dir == 2){
                for(int i=right; i>=left; i--){
                    ans.push_back(matrix[bottom][i]);
                }
            bottom --;    
            }
            else{
                for(int i=bottom; i>=top; i--){
                    ans.push_back(matrix[i][left]);
                }
            left++;   
            }
            
            dir = (dir+1)%4;
        }
        
        return ans;
        
    }
