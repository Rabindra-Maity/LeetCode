class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int i=0 ;
        int j=1;
       while(i < nums.size()-1){
          if(nums[i]==nums[j]) {
            ans.push_back(nums[j]);
          }
          i++;
          j++;
       }
       return ans;
    }
};