class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int a;
        int b;
        int c;
        a= nums.size();
        if (a==0){
            return {};
        }
        if (a==1){
            return 0;
        }
        if (a>1){
            b= *max_element(nums.begin(), nums.end());
            for (int i= 0; i<a; i++){
                if (nums[i]==b){
                    c= i;
                }
            }
        }
        return c;
    }
};