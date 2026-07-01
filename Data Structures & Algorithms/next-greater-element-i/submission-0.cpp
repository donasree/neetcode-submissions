class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n1 = nums1.size();
        int n2 = nums2.size();

        unordered_map<int, int> mpp;

        // Find next greater for every element in nums2
        for (int i = 0; i < n2; i++) {

            int next = -1;

            for (int j = i + 1; j < n2; j++) {

                if (nums2[j] > nums2[i]) {
                    next = nums2[j];
                    break;
                }
            }

            mpp[nums2[i]] = next;
        }

        vector<int> res;

        // Store answers for nums1
        for (int i = 0; i < n1; i++) {
            res.push_back(mpp[nums1[i]]);
        }

        return res;
    }
};