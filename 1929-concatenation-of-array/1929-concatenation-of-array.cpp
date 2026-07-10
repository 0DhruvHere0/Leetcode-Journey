class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int num_size= nums.size();
        for (int i=0; i<num_size; i++){
            nums.emplace_back(nums[i]);
        }
        return nums;
    }
};