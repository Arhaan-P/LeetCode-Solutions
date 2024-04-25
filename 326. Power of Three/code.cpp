#include <iostream>
#include <cmath>

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0){
            return false;
        }
        double log = log10(n) / log10(3);
        return int(log) == log;
    }
};
