class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> a;
        for (int i=1; i<=nums.size(); i++){
            a.emplace_back((*max_element(nums.begin(), nums.begin()+i))-(*min_element(nums.begin()+i-1, nums.end())));
        }
        int min_idx= -1;
        bool found= false;
        for (int i=0; i<a.size(); i++){
            if (a[i]<=k){
                if (!found){
                    min_idx=i;
                    found= true;
                }
                else if (i<min_idx){
                    min_idx=i;
                }
            }
        }
        return min_idx;
    }
};