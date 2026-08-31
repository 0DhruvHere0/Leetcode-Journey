class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int a=0;
        for (int i=0; i<operations.size(); i++){
            if (operations[i]=="X++" or operations[i]=="++X"){
                a++;
            }
            else if (operations[i]=="X--" or operations[i]=="--X"){
                a--;
            }
        }
        return a;
    }
};