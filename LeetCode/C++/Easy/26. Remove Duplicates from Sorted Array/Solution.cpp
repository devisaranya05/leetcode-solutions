class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        int n= mp.size();
        int cnt=0;
        vector<int> v;
        for(auto x: mp){
            v.push_back(x.first);
            cnt += x.second;
        }
        nums.clear();
        nums.insert(nums.end(), v.begin(), v.end());
        return n;
        // return v;
    }
};