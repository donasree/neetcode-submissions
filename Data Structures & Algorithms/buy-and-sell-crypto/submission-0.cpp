class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int l=0,r=1;
        int maxi=0;
        int diff=0;
        for(int i=0;i<n-1;i++){
            int r=i+1;
            while(r<n){
            if(prices[r]>prices[i]){
                diff=prices[r]-prices[i];
                maxi=max(maxi,diff);
            }
            r++;
            }
        }
        return maxi;
    }
};
