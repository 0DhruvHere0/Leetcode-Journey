class Solution {
public:
    bool isPalindrome(int x) {
        long long rialnum= x;
        long long revnum= 0;
        while (x>0){
            int lastdigit= x%10;
            revnum= (revnum*10)+lastdigit;
            x= x/10;
        }
        if (revnum==rialnum){
            return true;
        }
        return false;
    }
};