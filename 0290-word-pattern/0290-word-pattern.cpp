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