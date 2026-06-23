class Solution:
    def reverse(self, x: int) -> int:
        sign= 1
        if (x<0):
            sign= sign*(-1)
        if (x>0):
            sign= sign*(1)
        a= int(str(abs(x))[::-1])
        b= a*sign
        if (b<= (2**31)-1 and b>= (2**31)*(-1)):
            return b
        return 0