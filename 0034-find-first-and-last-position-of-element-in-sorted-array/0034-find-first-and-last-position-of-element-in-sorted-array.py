class Solution:
    def firstocc(self, arr: List[int], size: int, n: int):
        low=0
        high=size-1
        first=-1
        while low<=high:
            mid= low+(high-low)//2
            if arr[mid]==n:
                first= mid
                high= mid-1
            elif arr[mid]<n:
                low= mid+1
            else:
                high= mid-1
        return first
    def lastocc(self, arr: List[int], size: int, n: int):
        low=0
        high= size-1
        last=-1
        while low<=high:
            mid= low+(high-low)//2
            if arr[mid]==n:
                last= mid
                low= mid+1
            elif arr[mid]<n:
                low= mid+1
            else:
                high= mid-1
        return last
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        if self.firstocc(nums, len(nums), target)==-1:
            return [-1,-1]
        return [self.firstocc(nums, len(nums), target), self.lastocc(nums, len(nums), target)]