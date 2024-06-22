class Solution:
    def findLucky(self, arr: List[int]) -> int:
        hash_map = {}
        for i in arr:
            if i in hash_map:
                hash_map[i] += 1
            else:
                hash_map[i] = 1
        l = []
        for key, values in hash_map.items():
            if key == values:
                l.append(key)
        if(l):
            return max(l)
        return -1