int minSteps(int target){
        
        int sum = 0, steps = 0;
        target = abs(target);
        
        while(sum < target){
            sum = sum + steps;
            steps++;
        }
        
        while((sum - target)%2 == 1){
            sum += steps;
            steps ++ ;
        }
        
        return steps - 1; 
    }
