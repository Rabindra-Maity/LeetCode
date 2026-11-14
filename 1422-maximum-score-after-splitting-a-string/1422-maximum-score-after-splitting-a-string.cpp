class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        int totalSum = 0;
        int prefixsum =0;
        for(int i=0;i<n;i++){
            totalSum += (s[i] -'0') ;
        }
        int count =0;
        for(int i=0;i<n-1;i++){
            prefixsum+=(s[i] - '0') ;
             int suffixsum = totalSum - prefixsum;

             int left = (i+1) - prefixsum;
             count = max(count,suffixsum +left);

        }
        return count;
        
    }
};