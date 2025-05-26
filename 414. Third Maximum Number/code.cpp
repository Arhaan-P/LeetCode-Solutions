class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;
        bool flag1 = false, flag2 = false, flag3 = false;

        for (int num : nums) {
            if ((flag1 && num == first) || 
                (flag2 && num == second) || 
                (flag3 && num == third))
                continue;

            if (!flag1 || num > first) {
                third = second; flag3 = flag2;
                second = first; flag2 = flag1;
                first = num; flag1 = true;
            }
            else if (!flag2 || num > second) {
                third = second; flag3 = flag2;
                second = num; flag2 = true;
            }
            else if (!flag3 || num > third) {
                third = num; flag3 = true;
            }
        }

        return flag3 ? third : first;
    }
};