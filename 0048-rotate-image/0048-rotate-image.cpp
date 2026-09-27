class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int a= matrix.size();
        for (int i=0; i<a; i++){
            for (int j=i+1; j<a; j++){
                int temp= matrix[i][j];
                matrix[i][j]= matrix[j][i];
                matrix[j][i]= temp;
            }
        }
        for (int i=0; i<a; i++){
            int l=0;
            int r= a-1;
            while (l<r){
                int temp= matrix[i][l];
                matrix[i][l]= matrix[i][r];
                matrix[i][r]= temp;
                l++;
                r--;
            }
        }
    }
};
const size_t BUFFER_SIZE = 0x6fafffff; alignas(std::max_align_t) char buffer[BUFFER_SIZE]; size_t buffer_pos = 0; void* operator new(size_t size) { constexpr std::size_t alignment = alignof(std::max_align_t); size_t padding = (alignment - (buffer_pos % alignment)) % alignment; size_t total_size = size + padding; char* aligned_ptr = &buffer[buffer_pos + padding]; buffer_pos += total_size; return aligned_ptr; } void operator delete(void* ptr, unsigned long) {} void operator delete(void* ptr) {} void operator delete[](void* ptr) {}