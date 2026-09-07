class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int i=0;
        int j=1;
        while (j<nums.size()){
            if ((nums[i]+nums[j])%2==0){
                return false;
            }
            i++;
            j++;
        }
        return true;
    }
};