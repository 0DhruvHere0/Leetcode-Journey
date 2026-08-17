class Solution:
    def dayOfYear(self, date: str) -> int:
        y,m,d= map(int, [date[:4], date[5:7], date[8:]])
        days= [0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334]
        dateval= d+days[m-1]
        if m>2 and (y%4==0 and y%100!=0 or y%400==0):
            dateval= dateval+1
        return dateval