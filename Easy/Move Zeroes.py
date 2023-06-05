class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        count = 0
        for x in nums:
            if x==0:
                nums.pop(nums.index(x))
                nums.append(0)
        return nums
