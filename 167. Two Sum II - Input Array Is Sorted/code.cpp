class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;
        while (i < j) {
            int curSum = numbers[i] + numbers[j];

            if (curSum == target) {
                return {i + 1, j + 1};
            } 
            else if (curSum < target) {
                i++;
            } 
            else {
                j--;
            }
        }
        return {};
    }
};