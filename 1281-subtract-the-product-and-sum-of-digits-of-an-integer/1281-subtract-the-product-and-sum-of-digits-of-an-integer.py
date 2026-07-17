class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        sumn= 0
        prodn= 1
        while n>0:
            sumn= sumn+(n%10)
            prodn= prodn*(n%10)
            n= n//10
        return (prodn-sumn)