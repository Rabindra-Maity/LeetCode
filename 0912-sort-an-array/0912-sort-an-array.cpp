class Solution {
public:
    void marge(vector<int>&nums , int low , int mid , int high){
        int i=low,j=mid+1;
        vector<int>temp;
        while(i<= mid && j <= high){
            if(nums[i]>nums[j]) {
                temp.push_back(nums[j]);
                j++;
                }
            else{
                temp.push_back(nums[i]);
                i++;
            }
        }
        while(i<=mid) temp.push_back(nums[i++]);
        while(j<=high) temp.push_back(nums[j++]);
        for(int k = 0;k<temp.size();k++){
           nums[low+k] = temp[k];  
        }
    }
     void margeSort(vector<int>&nums , int low , int high){
        if(low>= high) return ;
        int mid = low + (high-low)/2;
        margeSort(nums,low , mid);
        margeSort(nums,mid+1,high);
        marge(nums,low, mid ,high);
     
     }
    vector<int> sortArray(vector<int>& nums) {
        margeSort(nums, 0,nums.size()-1);
        return nums;
    }
};