class Solution:
    def reverseVowels(self, s: str) -> str:
        vowels = 'aeiouAEIOU'
        vow = [char for char in s if char in vowels]
        ans = []
        
        for char in s:
            if char in vowels:
                ans.append(vow.pop())
            else:
                ans.append(char)
        
        return ''.join(ans)c