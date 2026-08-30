class Solution:
    def scoreOfString(self, s: str) -> int:
        sum=0
        for i in range(len(s)-1):
            currChar= s[i]
            nextChar= s[i+1]
            diff= ord(currChar)-ord(nextChar)
            sum+= abs(diff)
        return sum