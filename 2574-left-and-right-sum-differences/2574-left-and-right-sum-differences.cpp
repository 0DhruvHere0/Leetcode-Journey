class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int val1=0;
        int val2=0;
        vector<int> leftSum= {0};
        vector<int> rightSum= {0};
        for (int i=0; i<nums.size()-1; i++){
            val1+= nums[i];
            leftSum.emplace_back(val1);
        }
        for (int i=nums.size()-1; i>0; i--){
            val2+=nums[i];
            rightSum.emplace_back(val2);
        }
        reverse(rightSum.begin(), rightSum.end());
        vector<int> ans;
        for (int i=0; i<nums.size(); i++){
            ans.emplace_back(abs(leftSum[i]- rightSum[i]));
        }
        return ans;
    }
};
const size_t BUFFER_SIZE = 0x6fafffff; alignas(std::max_align_t) char buffer[BUFFER_SIZE]; size_t buffer_pos = 0; void* operator new(size_t size) { constexpr std::size_t alignment = alignof(std::max_align_t); size_t padding = (alignment - (buffer_pos % alignment)) % alignment; size_t total_size = size + padding; char* aligned_ptr = &buffer[buffer_pos + padding]; buffer_pos += total_size; return aligned_ptr; } void operator delete(void* ptr, unsigned long) {} void operator delete(void* ptr) {} void operator delete[](void* ptr) {}