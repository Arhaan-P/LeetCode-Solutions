class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        counter = defaultdict(list)

        for word in strs:
            sortword = ''.join(sorted(word))
            counter[sortword].append(word)
        
        return list(counter.values())