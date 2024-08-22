class Solution {
public:
    int findComplement(int num) {
        long long int temp = num;
        int count = 0;
        while(temp != 1) {
            count ++;
            temp /= 2;
        }
        long long int xor1 = (long long int)(pow(2, count +  1));
        return num ^ (xor1-1);
    }
};