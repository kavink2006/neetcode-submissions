class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string>> groups;
        vector<vector<string>> result;
        for(int i = 0; i < strs.size(); i++)
        {
            string orig = strs[i];
            string sig = strs[i]; 
            sort(sig.begin(), sig.end()); 
            groups[sig].push_back(orig);
        }
        for (auto& pair : groups) {
            result.push_back(pair.second); 
        }
        return result;
    }
};
