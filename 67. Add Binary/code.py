class Solution:
    def addBinary(self, a: str, b: str) -> str:
        Sum = int(a,2) + int(b,2)
        return bin(Sum)[2:]