class Solution:
    def differenceOfSums(self, n: int, m: int) -> int:
        a=[]
        b=[]
        for i in range(1, n+1):
            if i%m==0:
                a.append(i)
            elif i%m!=0:
                b.append(i)
        return sum(b)-sum(a)