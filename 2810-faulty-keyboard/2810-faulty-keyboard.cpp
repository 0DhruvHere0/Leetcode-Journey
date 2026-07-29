class Solution {
public:
    string finalString(string s) {
        string finale= "";
        for (char ch:s){
            if (ch=='i'){
                reverse(finale.begin(),finale.end());
            }
            else{
                finale.push_back(ch);
            }
        }
        return finale;
    }
};