class Solution {
public:
    string defangIPaddr(string address) {
        string new_add= "";
        for (char ch:address){
            if (ch=='.'){
                new_add+="[.]";
            }
            else{
                new_add+=ch;
            }
        }
        return new_add;
    }
};