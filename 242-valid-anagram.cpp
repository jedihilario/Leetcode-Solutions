class Solution {
    public:
        bool isAnagram(string s, string t) {
            if (s.size() != t.size()) return false;
    
            unordered_map<char, int> s_map;
    
            for (char c : s) s_map[c]++;
    
            for (char c : t) {
                if (s_map[c] > 0) {
                    s_map[c]--;
                    continue;
                }
    
                return false;
            }
    
            return true;
        }
};