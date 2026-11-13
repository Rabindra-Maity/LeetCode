class Solution {
public:
    bool checkGoodInteger(int n) {
         int continuous_sum = 0;
        
        while (n > 0) {
            int digit = n % 10;
            continuous_sum += digit * (digit - 1);
            n /= 10;
        }
        
        return continuous_sum >= 50;
    }
};