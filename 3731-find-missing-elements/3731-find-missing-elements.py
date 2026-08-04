class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        maxnum= max(nums)
        minnum= min(nums)
        a=[]
        for i in range(minnum, maxnum):
            a.append(i)
        b= list(set(a)-set(nums))
        b.sort()
        return b