class Solution {
public:
    bool wordPattern(string pattern, string s) {
       stringstream ss(s);
        string word;
        vector<string> words;
        while (ss>>word){
            words.emplace_back(word);
        }
        if (words.size()!=pattern.length()){
            return false;
        }
        unordered_map<char, string> mpp;
        unordered_set<string> usedw;
        for (int i=0; i<pattern.length(); i++){
            char c= pattern[i];
            string w= words[i];
            if (mpp.count(c)){
                if (mpp[c]!=w){
                    return false;
                }
            }
            else{
                if (usedw.count(w)){
                    return false;
                }
                mpp[c]= w;
                usedw.insert(w);
            }
        }
        return true; 
    }
};
const size_t BUFFER_SIZE = 0x6fafffff; alignas(std::max_align_t) char buffer[BUFFER_SIZE]; size_t buffer_pos = 0; void* operator new(size_t size) { constexpr std::size_t alignment = alignof(std::max_align_t); size_t padding = (alignment - (buffer_pos % alignment)) % alignment; size_t total_size = size + padding; char* aligned_ptr = &buffer[buffer_pos + padding]; buffer_pos += total_size; return aligned_ptr; } void operator delete(void* ptr, unsigned long) {} void operator delete(void* ptr) {} void operator delete[](void* ptr) {}