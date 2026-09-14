class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1= rec1[0];
        int y1= rec1[1];
        int x2= rec1[2];
        int y2= rec1[3];
        int x3= rec2[0];
        int y3= rec2[1];
        int x4= rec2[2];
        int y4= rec2[3];
        bool x= ((y3>= y2) or (y4<=y1) or (x3>=x2) or (x4<=x1));
        return !x;
    }
};
const size_t BUFFER_SIZE = 0x6fafffff; alignas(std::max_align_t) char buffer[BUFFER_SIZE]; size_t buffer_pos = 0; void* operator new(size_t size) { constexpr std::size_t alignment = alignof(std::max_align_t); size_t padding = (alignment - (buffer_pos % alignment)) % alignment; size_t total_size = size + padding; char* aligned_ptr = &buffer[buffer_pos + padding]; buffer_pos += total_size; return aligned_ptr; } void operator delete(void* ptr, unsigned long) {} void operator delete(void* ptr) {} void operator delete[](void* ptr) {}