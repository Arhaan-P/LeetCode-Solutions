class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int> mp;
        for (int i : nums) {
            mp[i]++;
        }
        int result = 0;
        for (const auto& i : mp) {
            if (i.second == 2) {
                result ^= i.first;
            }
        }

    return result;
    }
    
};