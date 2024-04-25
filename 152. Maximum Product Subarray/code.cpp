#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
    
    int maxv = nums[0];
    int minv = nums[0];
    int product = nums[0];

    for(int i = 1; i < nums.size(); i++){
        if(nums[i] < 0){
            swap(maxv,minv);
        }
        maxv = max(nums[i], maxv * nums[i]);
        minv = min(nums[i], minv * nums[i]);
        product = max(product, maxv);
    }
    return product;
    }
};