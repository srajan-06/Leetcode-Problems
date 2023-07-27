class Solution(object):
    def findLHS(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        py = defaultdict(int)

        for n in nums:
            py[(n,n+1)] += 1
            py[(n-1,n)] += 1
        
        Set = set(nums)
        ans = 0

        for f,v in py.items():
            if f[0] in Set and f[1] in Set:
                ans = max(ans,v)

        return ans
