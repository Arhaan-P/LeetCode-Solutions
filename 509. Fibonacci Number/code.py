class Solution:
    def fib(self, n: int) -> int:
        n1 = 0
        n2 = 1
        if n == 1:
            return n2
        elif n > 1:
            for i in range(1,n):
                nth=n1+n2
                n1=n2
                n2=nth
            return nth
        else:
            return 0