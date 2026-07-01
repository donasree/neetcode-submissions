class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int k=0;
        while(k<n){
            if(nums[k]==val){
                n=n-1;
                for(int j=k;j<n;j++){
                    nums[j]=nums[j+1];
                }
            }
            else k++;
        }
        return n;
    }
};