class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       for(int i=nums1.size()-1; i>=m; i--){
        if(nums1[i]==0)
        {
            nums1.pop_back();
        }
       }
       for(int j=0; j<nums2.size(); j++){
        nums1.push_back(nums2[j]);
       }
        sort(nums1.begin(), nums1.end());
    }
};