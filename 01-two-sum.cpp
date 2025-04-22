class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> num_map;
    
            for (int n = 0; n < nums.size(); n++) {
                if (num_map.count(target - nums[n]) > 0) {
                    return {num_map[target - nums[n]], n};
                }
    
                num_map[nums[n]] = n;
            }
    
            return {};
        }
    };