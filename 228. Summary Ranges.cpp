class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        int size_n = nums.size();
        vector<string> res;
        
        if (size_n == 0) return res;
    
      for (int i = 0; i < size_n;) {
        int start = i, end = i;
        while (end + 1 < size_n && nums[end+1] == nums[end] + 1) 
            end++;
        
        if (end > start) 
            res.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
        
         else 
            res.push_back(to_string(nums[start]));
        
          i = end+1;
    }
    return res;
    }
};

