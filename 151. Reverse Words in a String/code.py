class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split()
        wordsRev = words[::-1]
        ans = ''
        for word in wordsRev:
            ans += word + ' '
        return ans.strip()