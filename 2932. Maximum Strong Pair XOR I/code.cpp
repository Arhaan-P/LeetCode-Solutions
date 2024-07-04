class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int xor_sum = 0;
        for(auto i : nums) {
            for(auto j : nums) {
                if (abs(i - j) <= min(i, j)) {
                    xor_sum = max(xor_sum, i ^ j);
                }
            }
        }
        return xor_sum;        
    }
};