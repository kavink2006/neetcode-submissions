class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int, int> count;
        vector<vector<int>> buckets(nums.size() + 1);
        vector<int> results;
        
        for(int i = 0; i< nums.size(); i++)
        {
            count[nums[i]]++; 
        }
        for(auto& pair : count)
        {
            int number = pair.first;
            int frequency = pair.second;
            buckets[frequency].push_back(number);
        }
        for(int i = buckets.size()-1; i>=0; i--)
        {
            for(int num: buckets[i])
            {
                results.push_back(num);
                if(results.size() == k)
                {
                    return results;
                }
            }
        }
        return results;
            
        
        
    }
};
