class Solution:
    def smallestIndex(self, nums: List[int]) -> int:
        sumlist= [[int(digit) for digit in str(num)] for num in nums]
        for i in range(len(nums)):
            if (sum(sumlist[i])==i):
                return i
        return -1