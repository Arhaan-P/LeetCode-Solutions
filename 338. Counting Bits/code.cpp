#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    int ones(int n) {
        int count = 0;
        while (n != 0) {
            int remainder = n % 2;
            if (remainder == 1){
                count ++;
            }
            n /= 2;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> result;
        for(int i = 0; i <= n; i++){
            result.push_back(ones(i));
        }
        return result;
    }
};