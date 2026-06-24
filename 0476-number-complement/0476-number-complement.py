class Solution:
    def findComplement(self, num: int) -> int:
        a= bin(num)
        b= list(a)
        b.pop(0)
        b.pop(0)
        for i in range(len(b)):
            if (b[i]=="0"):
                b[i]= 1
            elif (b[i]=="1"):
                b[i]= 0
        c= "".join(map(str, b))
        return int(c, 2)