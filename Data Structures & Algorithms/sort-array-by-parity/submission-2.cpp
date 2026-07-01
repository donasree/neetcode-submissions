class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        for(int j=i+1;j<n;j++){
            if(nums[i]%2==0) i++;
            if(nums[i]%2!=0 && nums[j]%2==0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
        return nums;
    }
};