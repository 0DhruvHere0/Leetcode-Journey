class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int i= 0;
        while (i<nums.size()){
            nums.emplace_back(nums[(nums.size())-i-1]);
            i= i+2;
        }
        return nums;
    }
};