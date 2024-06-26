int maxSubArray(int* nums, int numsSize) {
    int maxSum = nums[0], curSum = 0;

    for(int i = 0; i < numsSize; i++){
        curSum += nums[i];
        if(curSum < nums[i]){
            curSum = nums[i];
        }
        
        if(curSum > maxSum){
            maxSum = curSum;
        }
    }
    return maxSum;
}