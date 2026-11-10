class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans;
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<= 'z'){
                ans.push_back(s[i]);
            }
            else if(s[i]=='('){ 
              st.push(ans.size());
              ans.push_back(s[i]);

              }
            else if(s[i]==')'){
               if(!st.empty()){
                 ans.push_back(s[i]);
                 st.pop();
               }
            }
            else{
                ans.push_back(s[i]);
            }
        }
        while(!st.empty()){
            ans.erase(st.top(),1);
            st.pop();
        }
        
        return ans;
    }
};