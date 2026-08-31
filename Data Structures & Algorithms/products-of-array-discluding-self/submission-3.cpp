auto init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> left_products(nums.size(), 1); 
        vector<int> right_products(nums.size(), 1); 
        vector<int> output(nums.size());

        for(int i = 1; i < n; i++)
        {
            left_products[i] = left_products[i-1]* nums[i-1];
        }
        
        for (int i = n - 2; i >= 0; i--) 
        {
            right_products[i] = right_products[i + 1] * nums[i + 1];
        }
        for (int i = 0; i < n; i++) 
        {
            output[i] = left_products[i] * right_products[i];
        }

        return output;

    }
};
