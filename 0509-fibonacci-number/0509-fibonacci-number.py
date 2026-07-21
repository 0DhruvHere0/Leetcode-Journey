class Solution:
    def fib(self, n: int) -> int:
        if (n<2):
            if (n==0):
                return 0
            elif (n==1):
                return 1
        elif (n>=2):
            F= [0]*(n+1)
            F[0]=0
            F[1]=1
            for i in range(2, n+1):
                F[i]= F[i-1]+F[i-2]
        return F[n]