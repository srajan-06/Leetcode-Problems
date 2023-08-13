class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        s = 0
        m = 1
        t = 0

        while(n>0):
            t = n%10
            s += t
            m *= t
            n  = n//10
        return m-s
