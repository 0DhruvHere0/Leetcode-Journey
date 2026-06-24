class Solution:
    def isPalindrome(self, s: str) -> bool:
        s= s.lower()
        a= re.sub(r'[^a-zA-Z0-9]', '', s)
        b= a[::-1]
        if (a==b):
            return True
        return False