class Solution:
    def reverseWords(self, s: str) -> str:
        s=s[::-1]
        rev=s.split(" ")
        rev=rev[::-1]
        return " ".join(rev)