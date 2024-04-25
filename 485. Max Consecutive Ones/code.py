from typing import List
class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        count = 0
        t = 0
        for i in nums:
            if i == 1:
                count += 1
                if count >t:
                    t = count 
            else:
                count = 0
        return t