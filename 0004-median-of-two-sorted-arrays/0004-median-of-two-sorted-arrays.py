class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        nums1.extend(nums2)
        nums1.sort()
        n= len(nums1)
        if ((n)%2!=0):
            c= nums1[(int(n/2))]
            return int(c)
        if ((n)%2==0):
            d= nums1[int(((n/2)-0.5))]
            e= nums1[int(((n/2)+0.5))]
            c= (d+e)/2
            return (c)