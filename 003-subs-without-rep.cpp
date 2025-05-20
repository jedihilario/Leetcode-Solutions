class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            // Sliding window approach
            unordered_set<char> letters;
    
            int i = 0;
            int j = 0;
            int res = 0;
    
            while (j < s.size()) {
                if (letters.find(s[j]) == letters.end()) {
                    letters.insert(s[j]);
                    res = max(res, j - i + 1);
                    j++;
                } else {
                    letters.erase(s[i]);
                    i++;
                }
            }
    
            return res;
        }
};