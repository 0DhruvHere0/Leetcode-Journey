class Solution:
    def mySqrt(self, x: int) -> int:
        if x==0:
            return 0
        n=x
        while True:
            new_n= 0.5*(n+(x/n))
            if new_n>=n:
                return int(n)
            n= new_n
            