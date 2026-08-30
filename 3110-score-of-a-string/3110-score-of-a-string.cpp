class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for (int i=0; i<s.size()-1; i++){
            int currChar= s[i];
            int nextChar= s[i+1];
            int diff= currChar-nextChar;
            sum= sum+abs(diff);
        }
        return sum;
    }
};