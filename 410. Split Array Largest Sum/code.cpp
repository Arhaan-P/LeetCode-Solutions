class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int start = 0, end = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            start = max(start, nums[i]); // min ans is max ele of arr
            end += nums[i]; // Max ans is sum of array

            // Binary Search
            while (start < end) {
                // try for mid as potential ans
                int mid = start + (end - start) / 2;

                // calculate how many pieces you can divide this into with this max sum
                int sum = 0;
                int pieces = 1; // Atleast one piece
                for (int num : nums) {
                    if (sum + num > mid) {
                        // cannot add this in this subarray, make new one
                        // say this num is added in a new subarray, then sum = num
                        sum = num; // new subarray has been created
                        pieces++;
                    }
                    else {
                        sum += num;
                    }
                }
                
                // Now we have some pieces

                if (pieces > k) { // Choose a higher sum
                    start = mid + 1;
                }
                else {
                    end = mid;  // Choose lower sum
                }

            }
        }
        return end; // start == end here
    }
};