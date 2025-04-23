class Solution {
    public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // Bin search approach
        int start = 1;
        long long end = *max_element(piles.begin(), piles.end());
        
        long long ans = 0;

        while (start <= end) {
            int mid = (start + end) / 2;

            long long hour = 0;
            for (int i = 0; i < piles.size(); i++) {
                hour += (piles[i] + mid - 1) / mid; 
            }

            if (hour > h ){
                start = mid + 1;
            } else {
                ans = mid;
                end = mid - 1;
            }
        }

        return ans;
    }
};