class Solution {
public:
    int mySqrt(int x) {
        long long answr=0;
        long long low=0;
        long long high= x;
        while (low<=high){
            long long mid= low+(high-low)/2;
            if (mid*mid<=x){
                answr= mid;
                low= mid+1;
            }
            else if (mid*mid>x){
                high= mid-1;
            }
        }
        return answr;
    }
};