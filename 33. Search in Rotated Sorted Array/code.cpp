class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivotIndex = pivot(nums);
        if (pivotIndex == -1) {
            return binarySearch(nums, target, 0, nums.size() - 1);
        }
        if (nums[pivotIndex] == target) {
            return pivotIndex;
        }
        else if (target >= nums[0]) {
            return binarySearch(nums, target, 0, pivotIndex);
        }
        return binarySearch(nums, target, pivotIndex + 1, nums.size() - 1);
    }

    int pivot(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if  (mid < end && nums[mid] > nums[mid + 1]) {
                return mid;
            }
            if (mid > start && nums[mid] < nums[mid - 1]) {
                return mid - 1;
            }
            if (nums[mid] <= nums[start]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return -1;
    }

    int binarySearch(vector<int>& nums, int target, int start, int end) {
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1; 
            }
        }
        return -1;
    }
};