class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        vector<int> even;
        for(int i : nums) {
            if (i % 2 == 0) {
                even.push_back(i);
            }
        }
        if (even.empty()) {
            return -1;
        }

        map<int, int> mp;
        for(int i : even) {
            mp[i] ++;
        }

        int max_freq = 0;
        int most_even = -1;

        for(auto &i : mp) {
            if (i.second > max_freq || (i.second == max_freq && i.first < most_even)) {
                max_freq = i.second;
                most_even = i.first;
            }
        }
        return most_even;
    }
};