class Solution {
public:
    bool checkDivisibility(int n) {
        int x = n;
        int sum  = 0;
        int product = 1;
        while(x > 0){
            int digit = x%10;
            sum += digit;
            product *= digit;
            x = x/10;
        }
        int ans = sum + product;
        if(n % ans == 0){
            return true;
        }
        else{
            return false;
        }
    }
};