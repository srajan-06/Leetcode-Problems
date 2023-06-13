class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
    #Solution1:
        # res = {}
        # for x in nums:
        #     if x not in res:
        #         res[x] = 1
        #     else:
        #         return True
        # return False
    
    
    #Solution2:
        numsSet = set(nums)

        if len(nums) == len(numsSet):
            return False
        return True
