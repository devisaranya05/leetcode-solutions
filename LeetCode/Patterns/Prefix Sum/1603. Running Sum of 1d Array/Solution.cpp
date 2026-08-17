class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>l;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
        sum += nums[i];
        l.push_back(sum);
        }
        return l;
    }
};