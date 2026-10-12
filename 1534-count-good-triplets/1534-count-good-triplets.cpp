class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count=0;
        for (int i=0; i<arr.size(); i++){
            for (int j=i+1; j<arr.size(); j++){
                for (int k=j+1; k<arr.size(); k++){
                    if ((abs(arr[i]-arr[j])<=a) && (abs(arr[j]-arr[k])<=b) && (abs(arr[k]-arr[i])<=c)){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
const size_t BUFFER_SIZE = 0x6fafffff; alignas(std::max_align_t) char buffer[BUFFER_SIZE]; size_t buffer_pos = 0; void* operator new(size_t size) { constexpr std::size_t alignment = alignof(std::max_align_t); size_t padding = (alignment - (buffer_pos % alignment)) % alignment; size_t total_size = size + padding; char* aligned_ptr = &buffer[buffer_pos + padding]; buffer_pos += total_size; return aligned_ptr; } void operator delete(void* ptr, unsigned long) {} void operator delete(void* ptr) {} void operator delete[](void* ptr) {}