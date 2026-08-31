class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(auto& s : strs)
        {
            int num = s.size();
            encoded += to_string(num) + "#" + s;
        }
        return encoded;
    }

    vector<string> decode(string s) 
    {
        vector<string> decoded;
        int i = 0; 
        while (i < s.size()) {
            int hashtag_pos = s.find('#', i);
            int length_of_number_string = hashtag_pos-i;
            string number_str = s.substr(i, length_of_number_string);
            int word_length = stoi(number_str);
        
            int word_start_pos = hashtag_pos+1;
            string word = s.substr(word_start_pos, word_length);
            decoded.push_back(word);
        
       
            i = word_start_pos+word_length; 
        }

        return decoded;
    }
};
