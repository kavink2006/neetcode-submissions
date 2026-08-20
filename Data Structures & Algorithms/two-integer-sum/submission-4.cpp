class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> one; 
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            // auto searches once and finds complement
            auto it = one.find(complement); 
            // checks if exists
            if (it != one.end()) {
                // you do -> to grab memory from that location.
                return {it->second, i}; 
            }
            
            one[nums[i]] = i; 
        }
        return {};
    }
};