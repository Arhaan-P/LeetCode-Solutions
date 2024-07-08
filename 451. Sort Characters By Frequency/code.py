class Solution:
    def frequencySort(self, s: str) -> str:
        counter = Counter(s)
        sorted_counter = sorted(counter.items(), key = lambda x : x[1], reverse = True)
        ans = ''.join([key * value for key, value in sorted_counter])
        return ans