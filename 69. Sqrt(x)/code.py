import math
class Solution:
    def mySqrt(self, x: int) -> int:
        x = x**0.5
        return math.floor(x)