class Solution:
    def reverseDegree(self, s: str) -> int:
        total=0
        curr=1
        for ch in s:
            an= 27-(ord(ch)-96)
            total+=(an*curr)
            curr+=1
        return total