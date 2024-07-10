class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;
        int prod = 1;
        int ans = 0;

        // Sliding Window
        int left = 0;
        int right = 0;

        while(right < nums.size()) {
            prod *= nums[right];

            while(prod >= k) {
                prod /= nums[left];
                left ++;
                // Shifting the window
            }
            ans += right - left + 1;
            right ++; // Expanding the window  
        }
        return ans;
    }
};