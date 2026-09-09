class Solution(object):
    def countCommas(self, n):
        """
        :type n: int
        :rtype: int
        """
        count=0
        if n>=10**15:
            for i in range(1,6):
                count+=(n-(10**(3*i))+1)
        elif 10**12<=n<10**15:
            for i in range(1,5):
                count+=(n-(10**(3*i))+1)
        elif 10**9<=n<10**12:
            for i in range(1,4):
                count+=(n-(10**(3*i))+1)
        elif 10**6<=n<10**9:
            for i in range(1,3):
                count+=(n-(10**(3*i))+1)
        elif 10**3<=n<10**6:
            count= n-1000+1
        return count