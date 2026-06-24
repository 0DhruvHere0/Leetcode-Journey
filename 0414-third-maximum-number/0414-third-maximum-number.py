class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        nums.sort()
        for i in range(1, len(nums)):
            if (nums[i-1]==nums[i]):
                nums[i-1]= ""
        a= list([int(i) for i in nums if i != ""])
        b= list(a)
        b.reverse()
        if (len(b)==0):
            return 0
        elif (len(b)==1):
            return b[0]
        elif (len(b)==2):
            return b[0]
        else:
            return b[2]
        return b
        return b