class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0;
        int right = arr.size() - 1;
        int mid;
        while (left < right) {
            
            mid = (left + right) / 2;

            if (arr[mid] < arr[mid + 1]) {
                left = mid + 1;
            }
            else {
                right = mid;
            }
        }
        return left;
    }
};