class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        substring=s.split()
        return len(substring[-1])