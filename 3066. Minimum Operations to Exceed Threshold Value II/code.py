class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        heapq.heapify(nums)
        c = 0

        while nums and nums[0] < k:
            x = heapq.heappop(nums)
            y = heapq.heappop(nums)

            new = min(x,y) * 2 + max(x, y)

            heapq.heappush(nums, new)

            c += 1
        return c