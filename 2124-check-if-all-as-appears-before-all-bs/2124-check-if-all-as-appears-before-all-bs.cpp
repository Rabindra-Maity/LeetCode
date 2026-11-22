class Solution {
public:
    bool checkString(string s) {
        int count = INT_MIN;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b') {
                count = i;
                break;
            }
        }

        if(count == INT_MIN) return true;
         int ans = 0;
        for(int i= count;i<s.size();i++){
            if(s[i]=='a') ans++;
        }

        if(ans>0) return false;

         else return true;
    }
};