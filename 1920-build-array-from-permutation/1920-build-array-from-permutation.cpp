class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> a;
        for (int i=0; i<nums.size(); i++){
            a.emplace_back(nums[nums[i]]);
        }
        return a;
    }
};