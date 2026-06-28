class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        a= []
        for i in range(len(nums)):
            a.append(i+1)
        return list(set(a)- set(nums))