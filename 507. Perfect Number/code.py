class Solution:
    def checkPerfectNumber(self, num: int) -> bool:
        divisor_sum = 1
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                divisor_sum += i
                if i != num // i:
                    divisor_sum += num // i
        return divisor_sum == num