class Solution {
public:
    bool canAliceWin(int n) {
        if (n<10){
            return false;
        }
        else if (10<=n && n<19){
            return true;
        }
        else if (19<=n && n<27){
            return false;
        }
        else if (27<=n && n<34){
            return true;
        }
        else if (34<=n && n<40){
            return false;
        }
        else if (40<=n && n<45){
            return true;
        }
        else if (45<=n && n<49){
            return false;
        }
        else {
            return true;
        }
    }
};