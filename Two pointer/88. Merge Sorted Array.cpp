class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (auto i : nums2){
            nums1[n+m-1] = i;
            n--;
        }
        sort(nums1.begin(), nums1.end());
    }
};