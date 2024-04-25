class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        a=num**0.5
        if int(a)*int(a)==num:
            return True
        else:
            return False