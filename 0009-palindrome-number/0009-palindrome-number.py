class Solution:
    def isPalindrome(self, x: int) -> bool:
        if (x<0):
            sign= -1
        else:
            sign= 1
        reversed_num = int(str(abs(x))[::-1])
        rev_sign= reversed_num * sign
        if (rev_sign==abs(x)):
            return True
        else:
            return False