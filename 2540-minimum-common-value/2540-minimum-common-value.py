class Solution:
    def getCommon(self, nums1: List[int], nums2: List[int]) -> int:
        a= list(set(nums1)&set(nums2))
        if (len(a)==0):
            return -1
        elif (len(a)==1):
            return a[0]
        elif (len(a)>1):
            return min(a)