class Solution:
    def climbStairs(self, n: int) -> int:
        if n<=1:
            return 1
        p_p,p,ways = 1,1,0

        for i in range(2,n+1):
            ways = p_p+p
            p_p, p = p, ways

        return ways
