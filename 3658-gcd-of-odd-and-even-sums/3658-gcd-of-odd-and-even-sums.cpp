class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        vector<int> listOdd;
        vector<int> listEven;
        for (int i=1; i<=2*n; i++){
            if (i%2==1){
                listOdd.emplace_back(i);
            }
            else if (i%2==0){
                listEven.emplace_back(i);
            }
        }
        int sumOdd= accumulate(begin(listOdd),end(listOdd),0);
        int sumEven= accumulate(begin(listEven), end(listEven),0);
        return gcd(sumOdd, sumEven);
    }
};