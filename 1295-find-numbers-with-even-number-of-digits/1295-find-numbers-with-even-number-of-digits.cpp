class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int a= nums.size();
        int count= 0;
        for (int i= 0; i<a; i++){
            string b= to_string(nums[i]);
            int c= b.size();
            if (c%2==0){
                count= count+1;
            }
        }
        return count;
    }
};