from typing import List

class Solution:
    def missingNumber(self, nums: List[int]) -> int:
       n=sum(nums)
       m=sum(range(0,len(nums)+1))
       return abs(n-m)