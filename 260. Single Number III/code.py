class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        hash_map = Counter(nums)
        ans = []
        for num, freq in hash_map.items():
            if freq == 1:
                ans.append(num)
        
        return ans