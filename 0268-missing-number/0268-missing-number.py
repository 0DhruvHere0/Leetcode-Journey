class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        a= len(nums)
        b= []
        c=1
        for i in range(0, a):
            b.append(c)
            c= c+1
        d= list(set(b)-set(nums))
        if d:
            e= int(d[0])
        else:
            return 0
        return e