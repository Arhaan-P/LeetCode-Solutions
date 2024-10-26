/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int i = 0;
    int j = numbersSize - 1;
    *returnSize = 2;
    int* arr = (int*)malloc(2 * sizeof(int));
    while (i < j) {
        int curSum = numbers[i] + numbers[j];

        if (curSum == target) {
            arr[0] = i + 1;
            arr[1] = j + 1;
            return arr;
        }
        else if (curSum < target) {
            i++;
        }
        else {
            j--;
        }
    }
    return NULL;
}