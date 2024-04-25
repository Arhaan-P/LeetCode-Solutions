/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int *square = (int *)malloc(numsSize * sizeof(int));
    for(int i = 0; i < numsSize; i++){
        square[i] = nums[i] * nums[i];
    }

    int left = 0; 
    int right = numsSize - 1;
    int index = numsSize - 1; //Since it is to be sorted
    while(left <= right){
        int left1 = nums[left] * nums[left];
        int right1 = nums[right] * nums[right];
        

        if(left1 > right1){
            square[index --] = left1;
            left++;
        }
        else if(left1 < right1){
            square[index--] = right1;
            right --;
        }
        else{           // If both are equal, put the element from the right pointer
            square[index--] = right1;
            right--;
        }
    }
    *returnSize = numsSize;
    return square;
}