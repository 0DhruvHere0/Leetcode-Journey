class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> a= nums;
        sort(a.begin(), a.end());
        vector<int> b= nums;
        sort(b.begin(), b.end(), greater<int>());
        if (a==nums){
            return true;
        }
        else if (b==nums){
            return true;
        }
        return false;
    }
};