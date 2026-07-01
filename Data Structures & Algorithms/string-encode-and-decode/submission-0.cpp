class Solution {
public:

    string encode(vector<string>& strs) {
         string encoded = "";

        for(string s : strs){
            // add length of string
            encoded += to_string(s.size());
            // separator
            encoded += '#';
            // add the string itself
            encoded += s;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;

        while(i < s.size()){

            int j = i;

            // find '#'
            while(s[j] != '#'){
                j++;
            }

            // get length
            int len = stoi(s.substr(i, j-i));

            // get the word
            string word = s.substr(j+1, len);

            decoded.push_back(word);

            // move to next encoded string
            i = j + 1 + len;
        }

        return decoded;
    }
};
