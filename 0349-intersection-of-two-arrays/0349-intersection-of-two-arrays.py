class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        a= []
        for i in range(len(nums1)):
            for j in range(len(nums2)):
                if (nums1[i]== nums2[j]):
                    a.append(nums2[j])
        a.sort()
        i = len(a) - 1
        while i > 0:
            if a[i] == a[i-1]:
                a.pop(i) 
            i -= 1
        return a