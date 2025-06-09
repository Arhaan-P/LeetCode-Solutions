class Solution {
public:
    int minBitFlips(int start, int goal) {
        int exor = start ^ goal;
        int ans = 0;
        while (exor > 0) {
            ans++;
            exor = exor - (exor & (-exor));
        }
        return ans;
    }
};