class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if len(nums)==0:
            return 0
        i=1
        while i< len(nums):
            if (nums[i-1]==nums[i]):
                nums.remove(nums[i])
            else:
                i+=1
        return len(nums)