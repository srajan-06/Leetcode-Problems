class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if not nums:
            return 0
        i = 0
        c = 1
        flag = False

        for j in range(1,len(nums)):
            if nums[i] == nums[j]:
                if not flag:
                    flag = True
                    i += 1
                    nums[i],nums[j] = nums[j],nums[i]
                    c += 1
            else:
                flag = False
                i += 1
                nums[i],nums[j] = nums[j],nums[i]
                c += 1
        return c
