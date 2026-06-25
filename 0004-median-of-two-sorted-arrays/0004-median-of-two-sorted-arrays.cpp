class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        int a= nums1.size();
        int b= a/2;
        float c;
        if (a==1){
            return nums1[0];
        }
        else if (a%2==1){
            return nums1[b];
        }
        else if (a%2==0){
            c= (nums1[b]+nums1[b-1])/2.0;
            return c;
        }
        return {};
    }
};