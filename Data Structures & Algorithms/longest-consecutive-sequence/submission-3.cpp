class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_set<int> check;
        int max = 0;
        int current = 1;
        int next = 0;
        for(auto& num : nums)
        {
            check.insert(num);
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(check.contains(nums[i]-1)) continue;
            current = 1;
            if(current > max) max = current;
            next = nums[i]+1;
            while(check.contains(next))
            {
                current++;
                if(current > max) max = current;
                next++;
            }
        }
        return max;
    }
};
