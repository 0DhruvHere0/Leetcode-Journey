class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;
        while (ss>>word){
            words.emplace_back(word);
        }
        int r=words.size();
        string a="";
        for (int i=r-1; i>=0; i--){
            a+=words[i];
            if (i>0){
                a+=" ";
            }
        }
        return a;
    }
};