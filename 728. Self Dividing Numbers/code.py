class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        def dividing(n):
            for i in str(n) : 
                i = int(i)
                if ((i == 0) or (n % i != 0)):
                    return False
            return True
        l = []
        for i in range(left, right + 1):
            if(dividing(i)):
                l.append(i)
        return l

                            
