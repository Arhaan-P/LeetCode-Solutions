class Solution:
    def clearDigits(self, s: str) -> str:
        s = list(s) 
        i = 0
        
        while i < len(s):  
            if s[i].isdigit(): 
                if i > 0 and not s[i - 1].isdigit():
                    del s[i] 
                    del s[i - 1]  
                    i = 0 
                else:
                    i += 1 
            else:
                i += 1 
                
        return ''.join(s)