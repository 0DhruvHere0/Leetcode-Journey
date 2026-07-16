class Solution:
    def gcdSum(self, nums: list[int]) -> int:
        max_num= nums[0]
        a=[]
        count=0
        for i in range(len(nums)):
            if nums[i]>=max_num:
                max_num= nums[i]
            b= math.gcd(nums[i], max_num)
            a.append(b)
        a.sort()
        for i in range(len(nums)//2):
            first= a[i]
            last= a[len(nums)-i-1]
            if i!=(len(nums)-i-1):
                count= count+(math.gcd(last,first))
            elif i==(len(nums)-i-1):
                break
        return count