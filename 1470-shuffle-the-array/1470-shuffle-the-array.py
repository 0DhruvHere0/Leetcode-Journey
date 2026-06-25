class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        a= []
        b= len(nums)
        if (b%2==1):
            return nums
        elif (b%2==0):
            for i in range(b//2):
                a.append(nums[i])
                a.append(nums[(b//2)+i])
            return a