class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        counter = {}
        for num in arr:
            if num in counter:
                counter[num] += 1
            else:
                counter[num] = 1
        
        
        occurences = list(counter.values())
        unique = set(occurences)
        
        return len(occurences) == len(unique)
