class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        int n=s.size();
        for(int i=1;i<n;i++){
            int ascii1 = (int)s[i-1];
            int ascii2 = (int)s[i];
            sum+=abs(ascii2-ascii1);
        }
        return sum;
    }
};