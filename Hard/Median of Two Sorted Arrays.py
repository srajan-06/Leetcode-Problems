class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        l = nums1 + nums2
        l.sort()
        low = 0
        high = len(l)-1
        median = int((low+high)/2)
        if len(l)%2 == 0:
            r = (l[median]+l[median+1])/2
        else:
            r = l[median]
        return float(r)
