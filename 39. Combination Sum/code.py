class Solution:
    def combinationSum(self, nums: List[int], target: int) -> List[List[int]]:
        n = len(nums)
        ans, sol = [], []

        def backtrack(i, curSum):
            if curSum == target:
                ans.append(sol[:])
                return
            
            if curSum > target or i == n:
                return
            
            # Pick next number
            backtrack(i + 1, curSum)

            # Pick current number and update sum
            sol.append(nums[i])
            backtrack(i, curSum + nums[i])
            sol.pop()
        
        backtrack(0, 0)
        return ans