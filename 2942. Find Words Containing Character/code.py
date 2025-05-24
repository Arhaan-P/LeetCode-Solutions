class Solution:
    def findWordsContaining(self, words: List[str], x: str) -> List[int]:
        ans = []
        for i, j in enumerate(words):
            if j.find(x) != -1:
                ans.append(i)
        return ans
        
