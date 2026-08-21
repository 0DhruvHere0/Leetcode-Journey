class Solution:
    def addBinary(self, a: str, b: str) -> str:
        first_num= int(a,2)
        second_num= int(b,2)
        sumattion= first_num+second_num
        return f"{sumattion:b}"