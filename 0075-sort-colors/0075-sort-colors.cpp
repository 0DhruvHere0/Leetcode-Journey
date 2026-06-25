class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> a;
        vector<int> b;
        vector<int> c;
        for (int i=0; i<nums.size(); i++){
            if (nums[i]==0){
                a.emplace_back(nums[i]);
            }
            else if (nums[i]==1){
                b.emplace_back(nums[i]);
            }
            else if (nums[i]==2){
                c.emplace_back(nums[i]);
            }
        }
        nums.clear();
        nums.insert(nums.end(), a.begin(), a.end());
        nums.insert(nums.end(), b.begin(), b.end());
        nums.insert(nums.end(), c.begin(), c.end());
    }
};