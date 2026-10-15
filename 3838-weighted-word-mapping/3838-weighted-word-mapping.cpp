class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        unordered_map<char, int> mpp;
        for (int i=0; i<26; i++){
            char key= 'a'+(i%26);
            mpp[key]= weights[i];
        }
        string a="";
        for (int i=0; i<words.size(); i++){
            int sum=0;
            for (int j=0; j<words[i].size(); j++){
                sum+=mpp[words[i][j]];
            }
            char mapp= 'z'-(sum%26);
            a.push_back(mapp);
        }
        return a;
    }
};