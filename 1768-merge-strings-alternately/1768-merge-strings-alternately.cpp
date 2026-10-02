class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans ;
        int j=0;
        int i;
      for( i=0 ;i<min(word1.size(),word2.size());i++){
            ans.push_back(word1[i]);
            ans.push_back(word2[j]);
            j++;
      }  
      if(i<word1.size()){
        ans += word1.substr(i,word1.size());
      }
      else{
        ans += word2.substr(j,word2.size());
      }
      return ans;
  }
};