class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = ''.join(char for char in s if char.isalnum())
        s = s.lower()
        if s[::1]==s[::-1]:
            return True
        else:
            return False
