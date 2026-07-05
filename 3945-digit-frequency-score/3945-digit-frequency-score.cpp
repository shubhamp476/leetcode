class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int , int>freq;
        int sum = 0;
        while(n >0 ){
            int digit = n%10;
            sum += digit;
            n = n/10;


        }
        return sum;
        
    }
};