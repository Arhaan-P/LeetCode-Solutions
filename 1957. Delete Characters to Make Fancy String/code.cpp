class Solution {
public:
    string makeFancyString(string s) {
        string ans;
        int count = 0;

        for (int i = 0; i < s.size(); i++) {
            if (i > 0 && s[i] == s[i - 1]) {
                count++;
            } 
            else {
                count = 1;
            }
            if (count < 3) {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};