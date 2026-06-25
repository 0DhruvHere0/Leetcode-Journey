class Solution:
    def sortColors(self, nums: List[int]) -> None:
        a= []
        b= []
        c= []
        for i in range(0, len(nums)):
            if (nums[i]==0):
                a.append(nums[i])
            elif (nums[i]==1):
                b.append(nums[i])
            elif (nums[i]==2):
                c.append(nums[i])
        nums.clear()
        nums.extend(a)
        nums.extend(b)
        nums.extend(c)
        return nums