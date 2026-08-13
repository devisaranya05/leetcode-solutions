class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m=0;
        int nm=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                m++;
            }
            else{
                if(nm < m){
                    nm=m;
                }
                m=0;
            }
            // cout << m <<" "<< nm << endl;
        }
        if(m>nm) {
            return m;
        }
        else{
        return nm;
        }
    }
};