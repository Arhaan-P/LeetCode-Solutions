class Solution:
    def intToRoman(self, num: int) -> str:
        nums = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
        sym = ["M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"]

        ans = []

        for i in range(len(nums)):
            while num >= nums[i]:
                num -= nums[i]
                ans.append(sym[i])
                
        return ''.join(ans)