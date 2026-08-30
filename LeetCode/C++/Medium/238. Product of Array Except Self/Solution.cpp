class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // long long p=1;
        // for(int i=0; i<nums.size(); i++){
        //     p *= nums[i];
        // }
        // vector<long long> a;
        // for(int i=0; i<nums.size(); i++){
        //     if(p==0){
        //         a.push_back(0);
        //     }
        //     // if(nums[i])
        //     a.push_back(p/nums[i]);
        // }
        // return a;


         int n = nums.size();
        vector<int> answer(n, 1);

        // Product of all elements to the left
        int prefix = 1;
        for (int i = 0; i < n; i++) {
            answer[i] = prefix;
            prefix *= nums[i];
        }

        // Product of all elements to the right
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            answer[i] *= suffix;
            suffix *= nums[i];
        }

        return answer;
    }
};