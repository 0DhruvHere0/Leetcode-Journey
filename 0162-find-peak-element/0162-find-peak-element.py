class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        if (len(nums)==0):
            return []
        elif (len(nums)==1):
            return 0
        elif (len(nums)>1):
            for i in range(len(nums)):
                if nums[i]==max(nums):
                    return i