class Solution {
public:
    bool checkDivisibility(int n) {
        int number= n;
        int sum=0;
        int prod=1;
        while (number>0){
            sum= sum+(number%10);
            prod= prod*(number%10);
            number= number/10;
        }
        if (n%(sum+prod)==0) return true;
        return false;
    }
};