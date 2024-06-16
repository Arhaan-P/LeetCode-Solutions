class Solution:
    def toLowerCase(self, s: str) -> str:
        return ''.join(i.lower() if 'A' <= i <= 'Z' else i for i in s)