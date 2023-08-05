class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        r = len(nums)-1
        while(k):
            p = nums.pop(r)
            nums.insert(0,p)
            k -= 1
        return nums
