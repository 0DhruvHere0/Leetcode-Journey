class Solution:
    def findMin(self, nums: list[int]) -> int:
        low=0
        high= len(nums)-1
        vals= float('inf')
        while low<=high:
            mid= low+(high-low)//2
            if vals>nums[mid]:
                vals= nums[mid]
            if low<high and nums[low]==nums[mid]==nums[high]:
                low+=1
                high-=1
            elif nums[mid]==nums[high]:
                high-=1
            elif nums[mid]<nums[high]:
                high= mid-1
            elif nums[mid]>nums[high]:
                low= mid+1
        return vals