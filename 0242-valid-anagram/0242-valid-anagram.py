class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        a= list(s)
        a.sort()
        b= list(t)
        b.sort()
        if (len(a)!=len(b)):
            return False
        else:
            if (a==b):
                return True
            return False