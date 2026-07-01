class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // if(nums.size() == 0) return 0;
         int n=nums.size();
        // sort(nums.begin(), nums.end());
        // int cnt=1;
        // int maxi=1;
        // for(int i=1;i<n;i++){
        //     if(nums[i]==nums[i-1]) continue;
        //     if(nums[i]==nums[i-1]+1) cnt++;
        //     else cnt=1;
        //     maxi=max(maxi,cnt);
        // }
        // return maxi;
         unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;

        for(int num : s){

            if(s.find(num - 1) == s.end()){

                int curr = num;
                int cnt = 1;

                while(s.find(curr + 1) != s.end()){
                    curr++;
                    cnt++;
                }

                longest = max(longest, cnt);
            }
        }

        return longest;
    }
};
