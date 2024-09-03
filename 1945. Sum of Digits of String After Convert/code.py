class Solution:
    def getLucky(self, s: str, k: int) -> int:
        n = ''
        for i in s:
            n += str(ord(i) - ord('a') + 1)
        while (k != 0):
            t = 0
            for i in n:
                t += int(i)
            n = str(t)
            k -= 1
        return int(n)