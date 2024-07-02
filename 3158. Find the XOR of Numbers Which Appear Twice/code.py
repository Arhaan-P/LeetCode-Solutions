class Solution:
    def duplicateNumbersXOR(self, nums: List[int]) -> int:
        hash_map = {}

        for i in nums:
            if i in hash_map:
                hash_map[i] += 1
            else:
                hash_map[i] = 1

        result = 0
        for i,j in hash_map.items():
            if j == 2:
                result ^= i
        return result