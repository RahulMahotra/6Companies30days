 int numberOfBoomerangs(vector<vector<int>>& points) {
        
      unordered_map<int, int> mp;
        int boomerangs = 0;
        for(int i=0; i<points.size(); i++){
            for(int j=0; j<points.size(); j++){
                if(i!=j){
                    int dist = pow(points[i][0] - points[j][0],2)
                             + pow(points[i][1] - points[j][1],2);
                    mp[dist]++;
                }
            }
            for(auto x: mp){
                boomerangs += x.second*(x.second-1);
            }
            mp.clear();
        }
        return boomerangs;
   }
