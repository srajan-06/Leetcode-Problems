class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
       k = 1
       l = len(nums)
       for i in range(1,l):
           if nums[i-1] != nums[i]:
               nums[k] = nums[i]
               k += 1
       return k
