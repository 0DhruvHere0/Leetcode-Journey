class Solution:
    def sumOfSquares(self, nums: List[int]) -> int:
        sum=0
        a= len(nums)
        for i in range(a):
            if a%(i+1)==0:
                sum= sum+(nums[i]*nums[i])
        return sum