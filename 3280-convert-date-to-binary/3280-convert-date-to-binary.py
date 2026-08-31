class Solution:
    def convertDateToBinary(self, date: str) -> str:
        a= str(bin(int(date[0:4]))[2:])
        b= str(bin(int(date[5:7]))[2:])
        c= str(bin(int(date[8:]))[2:])
        return a+"-"+b+"-"+c