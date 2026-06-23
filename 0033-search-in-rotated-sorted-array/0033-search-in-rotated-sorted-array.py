class Solution:
    def search(self, nums: List[int], target: int) -> int:
        a= len(nums)
        for i in range(a):
            if (nums[i]==target):
                return(i)
        else:
            return(-1)