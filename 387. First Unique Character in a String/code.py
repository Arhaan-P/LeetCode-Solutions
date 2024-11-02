class Solution:
    def firstUniqChar(self, s: str) -> int:
        counter = Counter(s)
        for char, freq in counter.items():
            if(freq == 1):
                return s.index(char)
        return -1