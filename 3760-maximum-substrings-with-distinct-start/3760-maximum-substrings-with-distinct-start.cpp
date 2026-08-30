class Solution {
public:
    int maxDistinct(string s) {
        int count=0;
        unordered_set<char> seen;
        for (char ch: s){
            if (seen.find(ch)==seen.end()){
                seen.insert(ch);
                count++;
            }
        }
        return count;
    }
};