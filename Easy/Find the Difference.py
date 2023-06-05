class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        if len(s)==0:
            return t
        s = list(s)
        t = list(t)
        s.sort()
        t.sort()
        for i in range(len(t)):
            if i<len(s) and s[i]==t[i]:
                continue
            else:
                return t[i]
