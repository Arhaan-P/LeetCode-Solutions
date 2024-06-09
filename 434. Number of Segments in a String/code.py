class Solution:
    def countSegments(self, s: str) -> int:
        if s == "" or s.isspace():
            return 0
        else:
            return len([segment for segment in s.split(" ") if segment])