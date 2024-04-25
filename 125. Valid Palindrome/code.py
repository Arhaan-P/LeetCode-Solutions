class Solution:
    def isPalindrome(self, s: str) -> bool:
        newstr= ''
        for i in s.lower():
            if i.isalnum():
                newstr += i
        return (newstr == newstr[::-1])