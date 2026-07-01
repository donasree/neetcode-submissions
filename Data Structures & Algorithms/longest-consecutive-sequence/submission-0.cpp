class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int cnt=1;
        int maxi=1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]) continue;
            if(nums[i]==nums[i-1]+1) cnt++;
            else cnt=1;
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};
