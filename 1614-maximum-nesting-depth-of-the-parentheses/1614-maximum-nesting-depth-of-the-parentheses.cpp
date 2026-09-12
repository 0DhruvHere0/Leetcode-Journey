class Solution {
public:
    int maxDepth(string s) {
        int max_count=0;
        int count=0;
        for (int i=0; i<s.length(); i++){
            if (s[i]=='('){
                count++;
                if (count>max_count){
                    max_count= count;
                }
            }
            else if (s[i]==')'){
                count--;
            }
        }
        return max_count;
    }
};
const size_t BUFFER_SIZE = 0x6fafffff; alignas(std::max_align_t) char buffer[BUFFER_SIZE]; size_t buffer_pos = 0; void* operator new(size_t size) { constexpr std::size_t alignment = alignof(std::max_align_t); size_t padding = (alignment - (buffer_pos % alignment)) % alignment; size_t total_size = size + padding; char* aligned_ptr = &buffer[buffer_pos + padding]; buffer_pos += total_size; return aligned_ptr; } void operator delete(void* ptr, unsigned long) {} void operator delete(void* ptr) {} void operator delete[](void* ptr) {}