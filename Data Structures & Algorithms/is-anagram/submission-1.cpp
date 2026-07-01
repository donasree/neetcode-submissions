class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;
        unordered_map<int,int>mpp1;
        unordered_map<int,int>mpp2;
        for(int i=0;i<n;i++){
            mpp1[s[i]]++;
            mpp2[t[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mpp1[s[i]]!=mpp2[s[i]]) return false;
        }
        return true;
    }
};
