class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int len = nums.size();
        sort(nums.begin(),nums.end());
        return (nums[len-1]-1)*(nums[len-2]-1);
    }
};

// Brute Force:
// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int high = INT_MIN;
//         for(int i = 0; i < nums.size(); i++) {
//         for(int j = i + 1; j < nums.size(); j++) {
//             int Max_product = (nums[i]-1)*(nums[j]-1);
//             if (Max_product > high) {
//                 high = Max_product;
//             }
//             }
//         }
//        return high;
//     }
// };