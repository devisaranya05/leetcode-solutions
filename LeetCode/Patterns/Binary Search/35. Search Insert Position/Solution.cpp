class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high = nums.size()-1;
        int mid= (low+high)/2;
        while(low <= high){
            mid = low +( high-low)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                high -= 1;
            }
            else{
                low += 1;
            }
        }
       return low;
    }
};