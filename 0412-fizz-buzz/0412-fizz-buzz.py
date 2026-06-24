class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        a= []
        for i in range(1, n+1):
            a.append(i)
        for i in range(len(a)):
            if (a[i]%3==0) and (a[i]%5==0):
                a[i]= "FizzBuzz"
            elif (a[i]%5==0):
                a[i]= "Buzz"
            elif (a[i]%3==0):
                a[i]= "Fizz"
        b= list(map(str, a))
        return b