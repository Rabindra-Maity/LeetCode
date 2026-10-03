class Solution {
public:
    string reverseWords(string s) {
        string final;
        for(int i =0;i<s.size();i++){
            string ans = "";
            for(int j =i;j<s.size();j++){
                if(s[i]==' ') break;
                ans.push_back(s[i]);
                i = j+1;
            }
            reverse(ans.begin(),ans.end());
            final += ans;
            if(i!=s.size()) final+=" ";
        }
        return final;
    }
};