class Solution {
public:
    string addStrings(string num1, string num2) {

        stack<int> st1, st2;

        for (int i = 0; i < num1.size(); i++) {
            st1.push(num1[i] - '0');
        }

        for (int i = 0; i < num2.size(); i++) {
            st2.push(num2[i] - '0');
        }

        int carry = 0;
        string ans = "";

        while (!st1.empty() || !st2.empty() || carry) {

            int sum = carry;

            if (!st1.empty()) {
                sum += st1.top();
                st1.pop();
            }

            if (!st2.empty()) {
                sum += st2.top();
                st2.pop();
            }

            ans.push_back((sum % 10) + '0');

            carry = sum / 10;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};