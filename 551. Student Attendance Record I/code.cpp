#include <iostream>
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int a_count = 0;
        for(int i = 0; s[i] != 0; i++) {
            if (s[i] == 'A') {
                a_count ++;
            }
        }
        if (a_count >= 2) {
            return 0;
        }
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'L' && s[i+1] == 'L' && s[i+2] == 'L') {
                return false;
            }
        }

        return true;

    }
};