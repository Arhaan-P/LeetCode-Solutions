class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> sums;
        long long curSum;

        for(int i = 0; i < nums.size(); i++) {
            curSum = 0;
            for(int j = i; j < nums.size(); j++) {
                curSum += nums[j];
                sums.push_back(curSum);
            }
        }

        sort(sums.begin(), sums.end());
        long long ans = 0;
        const int MOD = 1000000007;

        for(int i = left - 1; i < right; i++) {
            ans = (ans + sums[i]) % MOD;
        }

        return static_cast<int>(ans);
    }
};