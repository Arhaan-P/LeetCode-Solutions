class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        merged = []
        intervals.sort(key=lambda x: x[0])
        
        curr = intervals[0]
        for next in intervals[1:]:
            if next[0] <= curr[1]:
                curr[1] = max(curr[1], next[1])
            else:
                merged.append(curr)
                curr = next
        merged.append(curr)
        return merged