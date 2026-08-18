class Solution:
    def canAliceWin(self, n: int) -> bool:
        if ((n<10) or (19<=n and n<27) or (34<=n and n<40) or (45<=n and n<49)):
            return False
        return True