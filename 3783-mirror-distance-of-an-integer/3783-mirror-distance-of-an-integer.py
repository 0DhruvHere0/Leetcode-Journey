class Solution:
    def mirrorDistance(self, n: int) -> int:
        if (n<=9):
            return 0
        elif (n>9):
            a= list(map(int, str(n)))
            b= a[::-1]
            c= int("".join(map(str, b)))
            return abs(n-c)