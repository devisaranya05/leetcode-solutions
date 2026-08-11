class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        vector<int>v;
        for (int i=0; i<nums.size(); i++){
            if (nums[i]==0){
                count++;
            }
            else{
                v.push_back(nums[i]);
            }
        }
        nums.clear();
        for (int j=0; j<v.size(); j++){
            nums.push_back(v[j]);
        }
        for (int k=0; k<count; k++){
            nums.push_back(0);
        }
    }
};