class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        counter = {}

        for idx, num in enumerate(nums):
            counter[num] = idx
        
        for idx, num in enumerate(nums):
            wanted = target - num
            if wanted in counter and counter[wanted] != idx:
                return idx, counter[wanted]