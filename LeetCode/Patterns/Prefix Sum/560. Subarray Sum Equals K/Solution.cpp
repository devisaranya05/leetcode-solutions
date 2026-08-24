class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int i;
        int csum=0;
        int a=0;
        int l=0;
        for(i=0; i<nums.size(); i++){
            csum += nums[i];
            while(csum > k){
               csum -= nums[l];
               l ++;
            }
            if(csum == k){
                a++;
            }
        }
        return a;
    }
};