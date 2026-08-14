class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        a=[]
        for i in range(left, right+1):
            a.append(i)
        d=[]
        for i in range(len(a)):
            originum= a[i]
            tempnum= a[i]
            checking= True
            while tempnum>0:
                digit=tempnum%10
                tempnum=tempnum//10
                if digit==0 or originum%digit!=0:
                    checking= False
                    break
            if checking:
                d.append(originum)
        return d