class Solution {
public:
    string digitSum(string s, int k) {
        int n = s.size();
        if(s.length() <= k) return s;
        string ans="";
        string num = "";
        for(int i=0;i<n;i++){
             num +=s[i];
            if(num.size()%k==0 || i==n-1) {
                int sum =0;
                for(char ch : num){
                    sum += ch- '0';
                }
                ans += to_string(sum);
                num = "";
            }
        }
        return digitSum (ans , k);
    }
};