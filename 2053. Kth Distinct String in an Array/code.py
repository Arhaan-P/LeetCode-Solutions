class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        freq = Counter(arr)
        for i in arr:
            if freq[i] == 1:
                k-= 1
                if k == 0:
                    return i
        return ''