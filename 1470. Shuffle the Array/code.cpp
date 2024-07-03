class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> x;
        vector<int> y;
        vector<int> z;
        int i, j, k;
        for(i = 0; i < n; i++) {
            x.push_back(nums[i]);
        }
        for(j = n; j < 2*n; j++) {
            y.push_back(nums[j]);
        }
        for(k = 0; k < n; k++) {
            z.push_back(x[k]);
            z.push_back(y[k]);
        }
        return z;
    }
};