class Solution:
    def dayOfYear(self, date: str) -> int:
        yearinfo= int(date[0])*1000+ int(date[1])*100+ int(date[2])*10+ int(date[3])
        monthinfo= int(date[5])*10+ int(date[6])
        dateinfo= int(date[8])*10 + int(date[9])
        monthdays=0
        leap=0
        if (yearinfo%4==0 and yearinfo%100!=0) or (yearinfo%400==0):
            leap= 1
        if (monthinfo==1):
            monthdays= 0
        if (monthinfo==2):
            monthdays= 31
        if (monthinfo==3):
            monthdays= 59
        if (monthinfo==4):
            monthdays= 90
        if (monthinfo==5):
            monthdays= 120
        if (monthinfo==6):
            monthdays= 151
        if (monthinfo==7):
            monthdays= 181
        if (monthinfo==8):
            monthdays= 212
        if (monthinfo==9):
            monthdays= 243
        if (monthinfo==10):
            monthdays= 273
        if (monthinfo==11):
            monthdays= 304
        if (monthinfo==12):
            monthdays= 334
        if leap==1 and monthinfo>2:
            monthdays= monthdays+1
        return monthdays+dateinfo