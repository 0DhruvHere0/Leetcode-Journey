class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> a;
        if ((nums.size())%2!=0){
            return nums;
        }
        else{
            for (int i=0; i<(nums.size()/2); i++){
                a.emplace_back(nums[i]);
                a.emplace_back(nums[(nums.size()/2)+i]);
            }
        }
        return a;
    }
};