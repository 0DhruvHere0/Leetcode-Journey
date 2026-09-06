class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        sumarr=[]
        sumnums=0
        for i in range(len(nums)):
            sumnums+= nums[i]
            sumarr.append(sumnums)
        return sumarr