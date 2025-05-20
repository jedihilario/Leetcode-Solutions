class Solution {
    public:
        bool isPalindrome(int x) {
            if (x < 0) return false;
            if (x == 0) return true;
    
            int d = log10(x) + 1;
            int digits[d];
            int i = 0;
    
            while (x) {
                digits[i] = x % 10;
                x /= 10;
                i++;
            }
    
            for (int i = 0; i < d / 2; i++) {
                if (digits[i] != digits[d - i - 1]) return false;
            }
    
            return true;
        }
};