class Solution {
public:
    int subtractProductAndSum(int n) {
        int sumn= 0;
        int prodn= 1;
        while (n>0){
            sumn= sumn+(n%10);
            prodn= prodn*(n%10);
            n= static_cast<int>(n/10);
        }
        return (prodn-sumn);
    }
};