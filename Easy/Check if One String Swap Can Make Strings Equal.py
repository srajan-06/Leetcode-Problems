class Solution:
    def areAlmostEqual(self, s1: str, s2: str) -> bool:
        if len(s1)!=len(s2):
            return False
        if s1==s2:
            return True
        count = 0
        c1 = c2 = None
        for a,b in zip(s1,s2):
            if a!=b:
                count += 1
                if count>2 or (count==2 and (c1!=b or c2!= a)):
                    return False
                c1, c2 = a, b
        return count != 1
