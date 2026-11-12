class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        for( int i=0;i<n;i++){
             totalSum += nums[i];
        }
         int prefixSum = 0;
         int count =0;
        for(int i=0;i<n-1;i++){
            prefixSum += nums[i];
            int suffixSum = totalSum - prefixSum;
            int num = prefixSum - suffixSum;
            if(num %2==0) count++;
        }
        return count;
    }
};