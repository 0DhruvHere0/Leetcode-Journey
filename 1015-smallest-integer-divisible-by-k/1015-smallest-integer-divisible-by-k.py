class Solution:
    def smallestRepunitDivByK(self, k: int) -> int:
        count=0
        n=11
        if (k%2==0) or (k%5==0):
            return -1
        elif (k==1):
            return 1
        else:
            while n%k!=0:
                n=n*10+1
            while n>0:
                n=n//10
                count= count+1
        return count