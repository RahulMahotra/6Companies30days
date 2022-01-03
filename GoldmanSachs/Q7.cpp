class Solution {
  public:
    int findPosition(int n , int m , int k) {
   
        int pos = m + k -1;
        
        if (pos <= n )
            return curridx;

        m = pos - n;
        return (m % n == 0) ? n : m % n;
        
    }
};
