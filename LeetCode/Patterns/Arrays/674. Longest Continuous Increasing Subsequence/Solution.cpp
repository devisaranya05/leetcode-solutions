class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int a=1;
        int maxi=0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]<nums[i+1]){
                a++;
            }
            else{
            maxi = max(a, maxi);
            a=1;
            }
        }
        return max(a, maxi);
    }
};