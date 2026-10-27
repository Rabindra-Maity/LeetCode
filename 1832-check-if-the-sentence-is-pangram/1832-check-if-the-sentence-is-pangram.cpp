class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>ans(26,0);
        int n = sentence.size();

        for(char ch : sentence){
            int index = ch - 'a';
            ans[index]++;
        }
        for(int count : ans){
            if(count==0) return false;
        }
        return true;
    }
};