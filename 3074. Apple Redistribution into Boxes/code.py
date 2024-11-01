class Solution:
    def minimumBoxes(self, apple: List[int], capacity: List[int]) -> int:
        total = sum(apple) 
        capacity.sort(reverse = True) 
        ans = 0
        for cap in capacity:
            total -= cap
            ans += 1
            if total <= 0:
                return ans