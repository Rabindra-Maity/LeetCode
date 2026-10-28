class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int count =0;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) count++;
        }
        int op=0;
        for(int i=0;i<n-count;i++){
            if(nums[i]==0){
                op++;
            }
        }
        return op;
    }
};