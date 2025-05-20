class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // Initialize index var to keep the last appearance of "val"
        int index = 0;

        for (int i = 0; i < nums.size(); i++) {
            // If nums[i] != val, swap last "index" appearance and curr value
            if (nums[i] != val) {
                nums[index] = nums[i];
                // Move index pointer to the next position
                index++;
            }
        }

        // Return first appearance of "val" in fixed vector
        return index;
    }
};