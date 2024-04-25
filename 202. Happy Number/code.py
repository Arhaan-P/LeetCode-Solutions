class Solution:
    def isHappy(self, n: int) -> bool:
        set1=set()
        while n!=1: 
            n=sum([int(i)**2 for i in str(n)])
            if n in set1:
                return False
            else:
                set1.add(n)
        return True