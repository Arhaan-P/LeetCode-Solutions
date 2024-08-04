class Solution:
    def rangeSum(self, nums: List[int], n: int, left: int, right: int) -> int:
        sums = []
        MOD = 10**9 + 7
        for i in range(n):
            curSum = 0
            for j in range(i, n):
                curSum += nums[j]
                sums.append(curSum)

        sums.sort()

        return sum(sums[left - 1 : right]) % MOD