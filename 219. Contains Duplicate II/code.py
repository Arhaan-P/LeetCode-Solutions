class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        num_dict = {}
    
        for i, j in enumerate(nums):
            if j in num_dict and i - num_dict[j] <= k:
                return True
            num_dict[j] = i
        
        return False