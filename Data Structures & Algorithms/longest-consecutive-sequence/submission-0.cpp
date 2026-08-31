class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        vector<int> start = nums;
        sort(start.begin(), start.end());
        int max = 0;
        int current = 0;
        for(int i = 0; i < start.size(); i++)
        {
            if(i == 0)
            {
                max = 1;
                current = 1;
            }
            else
            {
                if(start[i] == (start[i-1]+1))
                {
                    current++;
                    if(current > max)
                    {
                        max = current;
                    }
                }
                else if(start[i] == start[i-1])
                {
                    continue;
                }
                else
                {
                    current = 1;
                }
            }
        }
        return max;
    }
};
