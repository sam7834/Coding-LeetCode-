class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> m1;
        int n = nums.size();
        
        for(int i=0; i< nums.size(); i++){
            m1[nums[i]]++;
            if( m1[nums[i]] > (n/2))
                return nums[i];
        }
        return 0;
    }
};
