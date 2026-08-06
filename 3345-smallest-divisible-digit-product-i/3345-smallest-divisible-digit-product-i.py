class Solution:
    def smallestNumber(self, n: int, t: int) -> int:
        while True:
            a= list(map(int, str(n)))
            b= math.prod(a)
            if (b%t==0):
                return n
            n= n+1