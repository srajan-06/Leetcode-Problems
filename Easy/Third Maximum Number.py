class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        d = len(set(nums))
        x = sorted(set(nums))

        if d==1:
            return x[0]
        elif d==2:
            return x[-1]
        else:
            return x[-3]
