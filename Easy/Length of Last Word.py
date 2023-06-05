class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s.strip()
        l = list(map(str,s.split()))
        return len(l[len(l)-1])
        
