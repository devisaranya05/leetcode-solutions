class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>p;
        int s=0;
        p.push_back(0);
        for(int i=0; i<nums.size(); i++){
           s+= nums[i];
           p.push_back(s);
        }
        for(int i=0; i<nums.size(); i++){
            int ls = p[i];
            int rs = p[nums.size()] - p[i+1];
            if(ls == rs){
                return i;
            }
        }
        return -1;
    }
};