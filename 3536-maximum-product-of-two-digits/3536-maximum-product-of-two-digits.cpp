class Solution {
public:
    int maxProduct(int n) {
        int largest=0;
        int slargest=0;
        while (n>0){
            int currdigit= n%10;
            if (currdigit>largest){
                slargest= largest;
                largest= currdigit;
            }
            else if (currdigit>slargest && currdigit<=largest){
                largest= largest;
                slargest= currdigit;
            }
            n=n/10;
        }
        return (largest*slargest);
    }
};