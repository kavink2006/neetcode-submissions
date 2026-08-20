class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<std::string, int> one;
        unordered_map<std::string, int> two;
        for(int i = 0; i < s.size(); i++)
        {
            string a = s.substr(i,1);
            string b = t.substr(i,1);
            one[a]++;
            two[b]++;
        }
        if(one == two) return true;
        return false;
    }
};
