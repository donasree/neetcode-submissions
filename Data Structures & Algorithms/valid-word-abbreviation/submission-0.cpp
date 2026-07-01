class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i = 0, j = 0;

        while(i < word.size() && j < abbr.size()){
            
            // Case 1: character match
            if(isalpha(abbr[j])){
                if(word[i] != abbr[j]) return false;
                i++;
                j++;
            }
            else{
                // Case 2: number (skip characters)

                // leading zero is invalid
                if(abbr[j] == '0') return false;

                int num = 0;

                // build full number (could be multiple digits)
                while(j < abbr.size() && isdigit(abbr[j])){
                    num = num * 10 + (abbr[j] - '0');
                    j++;
                }

                // skip 'num' characters in word
                i += num;
            }
        }

        // both should reach end
        return i == word.size() && j == abbr.size();
    }
};