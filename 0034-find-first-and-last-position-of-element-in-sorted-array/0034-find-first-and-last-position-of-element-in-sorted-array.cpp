class Solution {
private:
    int firstocc(vector<int>& arr, int size, int n){
        int low=0;
        int high=size-1;
        int first=-1;
        while (low<=high){
            int mid= low+((high-low)/2);
            if (arr[mid]==n){
                first= mid;
                high= mid-1;
            }
            else if (arr[mid]<n){
                low= mid+1;
            }
            else{
                high= mid-1;
            }
        }
        return first;
    }
    int lastocc(vector<int>& arr, int size, int n){
        int low=0;
        int high=size-1;
        int last= -1;
        while (low<=high){
            int mid= low+((high-low)/2);
            if (arr[mid]==n){
                last= mid;
                low= mid+1;
            }
            else if (arr[mid]<n){
                low= mid+1;
            }
            else{
                high= mid-1;
            }
        }
        return last;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (firstocc(nums, nums.size(), target)==-1){
            return {-1,-1};
        }
        return {firstocc(nums, nums.size(), target), lastocc(nums, nums.size(), target)};
    }
};