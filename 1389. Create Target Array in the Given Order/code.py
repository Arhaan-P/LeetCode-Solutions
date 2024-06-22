class Solution:
    def createTargetArray(self, nums: List[int], index: List[int]) -> List[int]:
        result = []
        for (i,j) in zip(nums,index):
            result.insert(j,i)
        return result