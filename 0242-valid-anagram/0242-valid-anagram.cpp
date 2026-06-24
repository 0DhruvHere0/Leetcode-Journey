class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> a(s.begin(), s.end());
        sort(a.begin(), a.end());
        vector<char> b(t.begin(), t.end());
        sort(b.begin(), b.end());
        int c= a.size();
        int d= b.size();
        if (c!=d){
            return false;
        }
        else{
            if (a==b){
                return true;
            }
        }
        return false;
    }
};