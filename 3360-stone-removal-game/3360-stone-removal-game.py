class Solution:
    def canAliceWin(self, n: int) -> bool:
        if n<10:
            return False
        elif (10<=n and n<19):
            return True
        elif (19<=n and n<27):
            return False
        elif (27<=n and n<34):
            return True
        elif (34<=n and n<40):
            return False
        elif (40<=n and n<45):
            return True
        elif (45<=n and n<49):
            return False
        else:
            return True