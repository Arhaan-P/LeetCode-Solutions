class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        int maxx = abs(nums[n - 1] - nums[0]);
        for (int i = 1; i < n; i++) {
            maxx = max(maxx, abs(nums[i] - nums[i - 1]));
        }
        return maxx;
    }
};