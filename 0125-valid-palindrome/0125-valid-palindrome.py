class Solution:
    def isPalindrome(self, s: str) -> bool:
        s= s.lower()
        valid= []
        alphabets= "qwertyuiopasdfghjklzxcvbnm1234567890"
        for char in s:
            if char in alphabets:
                valid.append(char)
        a= "".join(valid)
        b= a[::-1]
        if (a==b):
            return True
        return False