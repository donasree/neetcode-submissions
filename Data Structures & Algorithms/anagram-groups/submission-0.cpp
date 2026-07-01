class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         // Hash map: key = sorted string, value = list of anagrams
        unordered_map<string, vector<string>> mp;

        // Traverse all strings
        for(string s : strs){
            
            // Create a copy of the string
            string key = s;

            // Sort the string to form the key
            // All anagrams will have the same sorted string
            sort(key.begin(), key.end());

            // Insert the original string into the map
            mp[key].push_back(s);
        }

        // Store final grouped anagrams
        vector<vector<string>> ans;

        // Extract values from the map
        for(auto it : mp){
            ans.push_back(it.second);
        }

        return ans;
    }
};
// Sorting each string → O(k log k)
// Total → O(n * k log k)
// n = number of strings
// k = average length of string
