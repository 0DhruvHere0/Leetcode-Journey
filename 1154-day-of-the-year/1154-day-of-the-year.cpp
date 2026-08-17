class Solution {
public:
    int dayOfYear(string date) {
        int y= stoi(date.substr(0,4));
        int m= stoi(date.substr(5,2));
        int d= stoi(date.substr(8,2));
        vector<int> days= {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
        int findate= d+days[m-1];
        if (m>2 && ((y%4==0&& y%100!=0) || (y%400==0) )){
            findate++;
        }
        return findate;
    }
};