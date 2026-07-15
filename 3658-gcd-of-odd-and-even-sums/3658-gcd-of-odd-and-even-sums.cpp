class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumEven= (n)*(n+1);
        int sumOdd= pow(n,2);
        return gcd(sumOdd, sumEven);
    }
};