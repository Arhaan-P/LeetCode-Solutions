class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        prefix_sum = 0
        ans = 0
        prefix_map = defaultdict(int)
        prefix_map[0] = 1

        for i in nums:
            prefix_sum += i
            remainder = prefix_sum % k
            
            if remainder in prefix_map:
                ans += prefix_map[remainder]
            prefix_map[remainder] += 1
            
        return ans