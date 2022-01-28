  vector<int> find3Numbers(vector<int> nums, int N){ 
   
   if (nums.size() < 3)  return {};
      
  int seq = 1, min_num = nums[0], max_seq = INT_MAX, store_min = min_num;   

  for (int i = 1; i < N; i++) {
    
    if (nums[i] == min_num) continue;
    
    else if (nums[i] < min_num) {
      min_num = nums[i];
    } 
    else if (nums[i] < max_seq) { 
      max_seq = nums[i];     
      store_min = min_num;            
    } 
    else if (nums[i] > max_seq) return {store_min, max_seq, nums[i] };
  
  }
  return {};
}
