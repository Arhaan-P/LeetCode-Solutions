class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        counter = {}

        for i in magazine:
            if i in counter:
                counter[i] += 1
            else:
                counter[i] = 1

        for i in ransomNote:
            if i not in counter:
                return False
            elif counter[i] == 1:
                del counter[i]
            else:
                counter[i] -= 1
        return True
        
