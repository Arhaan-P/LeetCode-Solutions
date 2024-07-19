class Solution:
    def mostFrequentEven(self, nums: List[int]) -> int:
        even = [i for i in nums if i % 2 == 0]
        if not even:
            return -1
        counter = Counter(even)
        max_freq = max(counter.values())
        most_freq = [num for num, freq in counter.items() if freq == max_freq]
        return min(most_freq)