class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        n = len(arr)
        hash_map = {}
        for i in arr:
            if i in hash_map:
                hash_map[i] += 1
            else:
                hash_map[i] = 1

            if hash_map[i] > n // 4:
                return i