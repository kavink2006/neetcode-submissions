class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char, int> one;
        unordered_map<char, int> two;
        
        for(int i = 0; i < s.size(); i++) {
            char a = s[i]; 
            char b = t[i];
            
            one[a]++;
            two[b]++;
        }
        
        if(one == two) return true;
        return false;
    }
};