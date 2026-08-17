class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>l;
        vector<int>r;
        int i,k=0,b=0;
        for(i=0;i<nums.size(); i++){
             k += nums[i];
             b += nums[nums.size()-i-1];
             l.push_back(k);
             r.push_back(b);
        }
        for(i=0; i<nums.size(); i++){
            if(l[i]==r[nums.size()-i-1]){
                return i;
            }
        }
        return -1;
    }
};