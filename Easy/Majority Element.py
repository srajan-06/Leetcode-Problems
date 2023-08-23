class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        m = len(nums)//2
        nums.sort()
        i = 0
        for _ in range(len(nums)):
            if nums.count(nums[i])>m:
                return nums[i]
            else:
                i = i+nums.count(nums[i])
