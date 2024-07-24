class Solution:
    def minSetSize(self, arr: List[int]) -> int:
        counts = Counter(arr)
        s1 = set()

        sorted_counts = sorted(counts.items(), key=lambda x: x[1], reverse=True)
        deleted_count = 0

        for num, freq in sorted_counts:
            s1.add(num)
            deleted_count += freq

            if deleted_count >= len(arr) // 2:
                break
        return len(s1)