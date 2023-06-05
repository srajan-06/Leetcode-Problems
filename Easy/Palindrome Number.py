class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x<0:
            return False
        elif str(x)[::-1]==str(x):
            return True
