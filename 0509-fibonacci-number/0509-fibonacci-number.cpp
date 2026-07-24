class Solution {
private:
    int fibi(int a){
        if (a<=1) return a;
        return fibi(a-1)+fibi(a-2);
    }
public:
    int fib(int n) {
        return fibi(n);
    }
};