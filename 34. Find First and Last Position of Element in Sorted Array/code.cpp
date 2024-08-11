class Solution {
public:



    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};
        int left = binarySearch(nums, target, true);
        int right = binarySearch(nums, target, false);
        ans[0] = left;
        ans[1] = right;
        return ans;
    }
    int binarySearch(vector<int>& nums, int target, bool searchFIrst) {
        int left = 0;
        int right = nums.size() - 1;
        int result = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] > target) {
                right = mid - 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                result = mid;
                if (searchFIrst) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
        }
        
        return result;
    } 
};