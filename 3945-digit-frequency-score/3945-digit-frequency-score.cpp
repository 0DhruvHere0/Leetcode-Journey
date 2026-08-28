class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, int> frequencyMap;
        if (n==0) return 0;
        while (n>0){
            int x= n%10;
            frequencyMap[x]++;
            n= n/10;
        }
        int totalSum=0;
        for (const auto& [digit, count]: frequencyMap){
            totalSum= totalSum+ (digit*count);
        }
        return totalSum;
    }
};