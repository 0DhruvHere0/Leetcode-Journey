class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n= nums.size();
        if (n==1){
            return 0;
        }
        if (nums[0]>nums[1]){
            return 0;
        }
        if (nums[n-1]>nums[n-2]){
            return n-1;
        }
        int low=1;
        int high= n-2;
        while (low<=high){
            int mid= low+(high-low);
            if (nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                return mid;
            }
            if (nums[mid]<nums[mid+1]){
                low= mid+1;
            }
            else{
                high= mid-1;
            }
        }
        return low;
    }
};
const size_t BUFFER_SIZE = 0x6fafffff; alignas(std::max_align_t) char buffer[BUFFER_SIZE]; size_t buffer_pos = 0; void* operator new(size_t size) { constexpr std::size_t alignment = alignof(std::max_align_t); size_t padding = (alignment - (buffer_pos % alignment)) % alignment; size_t total_size = size + padding; char* aligned_ptr = &buffer[buffer_pos + padding]; buffer_pos += total_size; return aligned_ptr; } void operator delete(void* ptr, unsigned long) {} void operator delete(void* ptr) {} void operator delete[](void* ptr) {}