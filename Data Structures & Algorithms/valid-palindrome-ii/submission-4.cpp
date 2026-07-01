class Solution {
public:
     // Helper function to check if substring s[i...j] is a palindrome
    bool isPalindrome(string s, int i, int j){
        while(i < j){
            // If mismatch found → not a palindrome
            if(s[i] != s[j]) return false;
            
            // Move both pointers inward
            i++;
            j--;
        }
        // If all characters matched → palindrome
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0, j = s.size() - 1;

        // Two-pointer approach
        while(i < j){
            // If characters don't match
            if(s[i] != s[j]){
                // Try skipping either left or right character
                // Only one deletion allowed → check both possibilities
                return isPalindrome(s, i+1, j) || isPalindrome(s, i, j-1);
            }

            // If characters match → move inward
            i++;
            j--;
        }

        // If no mismatches → already a palindrome
        return true;   
    }
};