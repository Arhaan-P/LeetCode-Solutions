class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        freq = Counter(nums)
        max_freq = max(freq.values())
        return(sum(frequency for frequency in freq.values() if frequency == max_freq))