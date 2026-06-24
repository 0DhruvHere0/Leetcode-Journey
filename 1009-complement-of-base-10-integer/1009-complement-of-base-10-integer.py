class Solution:
    def bitwiseComplement(self, n: int) -> int:
        a= bin(n)
        b= list(a)
        b.pop(0)
        b.pop(0)
        for i in range(len(b)):
            if (b[i]=="0"):
                b[i]= 1
            elif (b[i]=="1"):
                b[i]= 0
        c= "".join(map(str, b))
        d= int(c, 2)
        return d