class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        val1=0
        val2=0
        leftSum=[0]
        rightSum=[0]
        for i in range(len(nums)-1):
            val1= val1+nums[i]
            leftSum.append(val1)
        for j in range(len(nums)-1, 0, -1):
            val2= val2+nums[j]
            rightSum.append(val2)
        rightSum= rightSum[::-1]
        ans=[]
        for i in range(len(nums)):
            ans.append(abs(leftSum[i]-rightSum[i]))
        return ans