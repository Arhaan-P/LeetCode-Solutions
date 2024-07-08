class Solution:
    def superPow(self, a: int, b: List[int]) -> int:
        if a == 1:
            return 1

        number = int(''.join(map(str, b)))
        
        return pow(a, number, 1337)