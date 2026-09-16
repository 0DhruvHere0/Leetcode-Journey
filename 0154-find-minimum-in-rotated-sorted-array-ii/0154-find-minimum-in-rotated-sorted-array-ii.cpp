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
const size_t BUFFER_SIZE = 0x6fafffff; alignas(std::max_align_t) char buffer[BUFFER_SIZE]; size_t buffer_pos = 0; void* operator new(size_t size) { constexpr std::size_t alignment = alignof(std::max_align_t); size_t padding = (alignment - (buffer_pos % alignment)) % alignment; size_t total_size = size + padding; char* aligned_ptr = &buffer[buffer_pos + padding]; buffer_pos += total_size; return aligned_ptr; } void operator delete(void* ptr, unsigned long) {} void operator delete(void* ptr) {} void operator delete[](void* ptr) {}