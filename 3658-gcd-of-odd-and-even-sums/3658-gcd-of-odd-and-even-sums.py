class Solution:
    def gcdOfOddEvenSums(self, n: int) -> int:
        oddList= []
        evenList=[]
        for i in range(2*n+1):
            if i%2==1:
                oddList.append(i)
            elif i%2==0:
                evenList.append(i)
        sumOdd= sum(oddList)
        sumEven= sum(evenList)
        return math.gcd(sumOdd, sumEven)