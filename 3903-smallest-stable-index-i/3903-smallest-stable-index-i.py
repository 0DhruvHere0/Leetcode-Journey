class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
        '''instability score= max(nums[:i])-min(nums[i:len(nums)-1])
        if instability score<=k return smallest instability score else return -1'''
        a=[]
        for i in range(1, len(nums)+1):
            a.append(max(nums[:i])- min(nums[i-1:]))
        min_num= -1
        found= False
        for i in range(len(a)):
            if a[i]<=k:
                if not found:
                    min_num=i
                    found= True
                elif i<min_num:
                    min_num=i
        return min_num
                