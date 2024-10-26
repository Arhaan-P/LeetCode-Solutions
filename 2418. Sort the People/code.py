class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        dic = dict(zip(heights, names))
        sort_heights = sorted(heights, reverse = True)
        ans = [dic[i] for i in sort_heights]
        return ans