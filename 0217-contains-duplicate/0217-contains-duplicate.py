class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        a= nums.sort()
        b= len(nums)
        for i in range (1, b):
            if (nums[i-1]==nums[i]):
                return True
            else:
                i+=1
        return False