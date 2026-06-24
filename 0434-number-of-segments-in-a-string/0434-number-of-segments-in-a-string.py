class Solution:
    def countSegments(self, s: str) -> int:
        a= list(map(str, s.split()))
        return len(a)