/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int peakIndex = peak(mountainArr);
        int firstTry = binarySearch(mountainArr, target, 0, peakIndex, true);
        if (firstTry != -1) {
            return firstTry;
        }
        return binarySearch(mountainArr, target, peakIndex + 1, mountainArr.length() - 1, false);
    }

    int peak(MountainArray &arr) {
        int start = 0;
        int end = arr.length() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (arr.get(mid) < arr.get(mid + 1)) {
                start = mid + 1;
            }
            else {
                end = mid;
            }
        }
        return start;
    }

    int binarySearch(MountainArray &arr, int target, int start, int end, bool ascending) {
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr.get(mid) == target) {
                return mid;
            }

            if (ascending) {
                if (arr.get(mid) < target) {
                    start = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            } 
            else {
                if (arr.get(mid) < target) {
                    end = mid - 1;
                } 
                else {
                    start = mid + 1;
                }
            }
        }
        return -1;
    }
};