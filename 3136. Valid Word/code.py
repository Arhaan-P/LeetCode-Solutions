class Solution:
    def isValid(self, word: str) -> bool:
        if len(word) < 3:
            return False

        vowel = False
        consonant = False

        for i in word:
            if not i.isalnum():
                return False
            
            if i.lower() in 'aeiou':
                vowel = True
            elif i.isalpha():
                consonant = True
        
        return vowel and consonant
