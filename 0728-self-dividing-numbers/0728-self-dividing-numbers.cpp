class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> a;
        for (int i=left; i<=right; i++){
            a.emplace_back(i);
        }
        vector<int> b;
        for (int i=0; i<a.size(); i++){
            int originum= a[i];
            int tempnum= a[i];
            bool checking= true;
            while (tempnum>0){
                int digit= tempnum%10;
                tempnum= tempnum/10;
                if ((digit==0) or (originum%digit!=0)){
                    checking= false;
                    break;
                }
            }
            if (checking){
                b.emplace_back(originum);
            }
        }
        return b;
    }
};