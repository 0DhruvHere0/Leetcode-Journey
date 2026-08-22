class Solution:
    def checkDivisibility(self, n: int) -> bool:
        number=n
        sum=0
        prod=1
        while n>0:
            sum+= n%10
            prod*= n%10
            n= n//10
        total= sum+prod
        if number%total==0:
            return True
        return False