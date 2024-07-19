class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        map<int,int> mp;
        for (int i : nums) {
            mp[i] ++;            
        }
        for(auto &i : mp) {
            if (i.second > 2) {
                return false;
            }
        }
        return true;
    }
};c