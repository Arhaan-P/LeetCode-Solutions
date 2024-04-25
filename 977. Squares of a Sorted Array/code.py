from typing import List

class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        l = [x*x for x in nums]
        l.sort()
        return l