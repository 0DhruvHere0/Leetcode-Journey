class Solution:
    def numIdenticalPairs(self, nums: list[int]) -> int:
        a=[]
        for i in range(len(nums)):
            for j in range(len(nums)):
                if nums[i]==nums[j]:
                    if i<j:
                        a.append([i,j])
        return len(a)