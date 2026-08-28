class Solution:
    def digitFrequencyScore(self, n: int) -> int:
        total=0
        while n>0:
            x= n%10
            total= total+x
            n= n//10
        return total