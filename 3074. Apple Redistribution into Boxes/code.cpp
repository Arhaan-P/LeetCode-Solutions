#include <vector>
#include <algorithm>

class Solution {
public:
    int minimumBoxes(std::vector<int>& apple, std::vector<int>& capacity) {
        int total = 0;
        for (int i : apple) {
            total += i;
        }
        sort(capacity.begin(), capacity.end(), greater<int>());
        int ans = 0;
        for (int cap : capacity) {
            if (total <= 0) {
                break;
            }
            total -= cap;
            ans++;
        }
        return ans;
    }
};