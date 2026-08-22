class Solution:
    def maxProduct(self, n: int) -> int:
        largest=0
        slargest=0
        while n>0:
            a= n%10
            if a>largest:
                slargest= largest
                largest=a
            elif a>slargest and a<=largest:
                largest=largest
                slargest=a
            n=n//10
        return (largest*slargest)