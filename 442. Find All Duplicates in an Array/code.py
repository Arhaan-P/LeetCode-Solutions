class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        counter = Counter(nums)
        ans = []
        for i, j in counter.items():
            if j == 2:
                ans.append(i)
        return ans