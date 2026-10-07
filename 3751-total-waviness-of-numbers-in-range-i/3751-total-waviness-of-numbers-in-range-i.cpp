class Solution {
public:
int countWaviness(int n) {
        string s = to_string(n);
        int count = 0;

        // First and last digit cannot be peak/valley
        for (int i = 1; i < s.size() - 1; i++) {
            
            // Peak
            if (s[i] > s[i - 1] && s[i] > s[i + 1]) {
                count++;
            }
            
            // Valley
            else if (s[i] < s[i - 1] && s[i] < s[i + 1]) {
                count++;
            }
        }

        return count;
    }
    int totalWaviness(int num1, int num2) {
         int ans = 0;

        for (int i = num1; i <= num2; i++) {
            ans += countWaviness(i);
        }

        return ans;
    }
};