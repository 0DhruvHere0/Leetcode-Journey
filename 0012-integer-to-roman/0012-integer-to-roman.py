class Solution:
    def intToRoman(self, num: int) -> str:
        a= num%10
        b= (num//10)%10
        c= (num//100)%10
        d=num//1000
        e= []
        if (d!=0):
            if (d==1):
                e.append("M")
            elif (d==2):
                e.append("MM")
            elif (d==3):
                e.append("MMM")
        if (c!=0):
            if (c==1):
                e.append("C")
            elif (c==2):
                e.append("CC")
            elif (c==3):
                e.append("CCC")
            elif (c==4):
                e.append("CD")
            elif (c==5):
                e.append("D")
            elif (c==6):
                e.append("DC")
            elif (c==7):
                e.append("DCC")
            elif (c==8):
                e.append("DCCC")
            elif (c==9):
                e.append("CM")
        if (b!=0):
            if (b==1):
                e.append("X")
            elif (b==2):
                e.append("XX")
            elif (b==3):
                e.append("XXX")
            elif (b==4):
                e.append("XL")
            elif (b==5):
                e.append("L")
            elif (b==6):
                e.append("LX")
            elif (b==7):
                e.append("LXX")
            elif (b==8):
                e.append("LXXX")
            elif (b==9):
                e.append("XC")
        if (a!=0):
            if (a==1):
                e.append("I")
            elif (a==2):
                e.append("II")
            elif (a==3):
                e.append("III")
            elif (a==4):
                e.append("IV")
            elif (a==5):
                e.append("V")
            elif (a==6):
                e.append("VI")
            elif (a==7):
                e.append("VII")
            elif (a==8):
                e.append("VIII")
            elif (a==9):
                e.append("IX")
        f= "".join(e)
        return f