class Solution:
    def frequencySort(self, nums: List[int]) -> List[int]:
        hash_map = Counter(nums)
        nums.sort(key=lambda x: (hash_map[x], -x))
        
        return nums 