class Solution:
    def finalString(self, s: str) -> str:
        a=[]
        for char in s:
            if char=='i':
                a.reverse()
            else:
                a.append(char)
        return "".join(a)