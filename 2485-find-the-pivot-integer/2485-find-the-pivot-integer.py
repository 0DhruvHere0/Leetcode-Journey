class Solution:
    def pivotInteger(self, n: int) -> int:
        sum_n= (n**2+n)//2
        left=0
        for i in range(1, n+1):
            right= sum_n-left-i
            if (left==right):
                return i
            left= left+i
        return -1