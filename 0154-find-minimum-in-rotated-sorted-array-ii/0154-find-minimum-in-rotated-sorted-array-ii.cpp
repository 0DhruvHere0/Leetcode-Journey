class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high= nums.size()-1;
        int vals= INT_MAX;
        while (low<=high){
            int mid= low+(high-low)/2;
            if (vals>nums[mid]){
                vals= nums[mid];
            }
            if (nums[low]==nums[mid] and nums[mid]==nums[high]){
                low++;
                high--;
                continue;
            }
            else if (nums[mid]==nums[high]){
                high--;
            }
            else if (nums[mid]<nums[high]){
                if (vals>nums[mid]){
                    vals= nums[mid];
                }
                high= mid-1;
            }
            else if (nums[mid]>=nums[high]){
                if (vals>nums[mid]){
                    vals= nums[mid];
                }
                low= mid+1;
            }
        }
        return vals;
    }
};