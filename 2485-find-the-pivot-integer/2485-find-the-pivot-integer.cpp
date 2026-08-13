class Solution {
public:
    int pivotInteger(int n) {
        int total= ((n)*(n+1))/2;
        int left=0;
        for (int i=1; i<n+1; i++){
            int right= total-left-i;
            if (left==right){
                return i;
            }
            left= left+i;
        }
        return -1;
    }
};