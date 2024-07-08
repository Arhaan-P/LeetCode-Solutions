from collections import Counter
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        counter = Counter(nums)
        most_freq = counter.most_common(k)
        ans = [i for i, j in most_freq]
        return ans