class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
           auto lower_bound_it = std::lower_bound(nums.begin(), nums.end(), target);
        if (lower_bound_it == nums.end() || *lower_bound_it != target) {
            return {-1, -1};
        }
        auto upper_bound_it = std::upper_bound(nums.begin(), nums.end(), target);
        int first_pos = std::distance(nums.begin(), lower_bound_it);
        int last_pos = std::distance(nums.begin(), upper_bound_it) - 1;
        
        return {first_pos, last_pos};
        
    }
};