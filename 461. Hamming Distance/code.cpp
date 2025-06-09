class Solution {
public:
    int hammingDistance(int x, int y) {
        int exor = x ^ y;
        int ans = 0;
        while (exor > 0) {
            ans++;
            exor = exor - (exor & (-exor));
        }
        return ans;
    }
};