class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_set<char> st; // stores characters in current window

        int l = 0;              // left pointer
        int maxi = 0;           // answer

        for(int r = 0; r < s.size(); r++) { // move right pointer

            // if duplicate character found
            while(st.count(s[r])) {

                st.erase(s[l]); // remove left character
                l++;            // move left pointer forward
            }

            st.insert(s[r]);    // add current character

            maxi = max(maxi, r - l + 1); // update max length
        }

        return maxi;
    }
};
