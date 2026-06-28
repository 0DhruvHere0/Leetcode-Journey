class Solution:
    def concatWithReverse(self, nums: list[int]) -> list[int]:
        i= 0
        while (i<len(nums)):
            nums.append(nums[len(nums)-i-1])
            i= i+2
        return nums