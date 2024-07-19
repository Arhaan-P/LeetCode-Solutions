class Solution:
    def isPossibleToSplit(self, nums: List[int]) -> bool:
        hash_map = Counter(nums)
        for frequency in hash_map.values():
            if frequency > 2:
                return False
        return True