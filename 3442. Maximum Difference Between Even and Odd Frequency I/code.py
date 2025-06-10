class Solution:
    def maxDifference(self, s: str) -> int:
        counter = Counter(s)
        max_odd = 0
        min_even = float('inf')

        for freq in counter.values():
            if freq % 2 == 1:
                max_odd = max(max_odd, freq)
            else:
                if freq > 0:
                    min_even = min(min_even, freq)

        return max_odd - min_even if min_even != float('inf') else 0