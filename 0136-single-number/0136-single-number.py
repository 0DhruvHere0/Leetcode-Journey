class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        a= Counter(nums)
        for element, count in a.items():
            if count==1:
                return element