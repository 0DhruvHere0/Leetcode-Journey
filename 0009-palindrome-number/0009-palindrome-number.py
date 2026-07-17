class Solution:
    def isPalindrome(self, x: int) -> bool:
        ini_x= x
        rev_x= 0
        while x>0:
            lastdigit= x%10
            rev_x= (rev_x*10)+lastdigit
            x= x//10
        if (ini_x==rev_x):
            return True
        return False