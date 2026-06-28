class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (nums[0]>target){
            return 0;
        }
        else if (nums.back()<target){
            return nums.size();
        }
        else{
            for (int i= 1; i<nums.size(); i++){
                if (nums[i]==target){
                    return i;
                }
                else if ((nums[i-1]<target) && (nums[i]>target)){
                    return i;
                }
            }
        }
        return 0;
    }
};