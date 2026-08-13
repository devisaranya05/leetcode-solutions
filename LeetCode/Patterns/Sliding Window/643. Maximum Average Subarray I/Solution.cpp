class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // int n = nums.size();
        // double maxAvg = -1e9;
        // for (int i = 0; i <= n - k; i++) {
        //     int sum = 0;
        //     for (int j = i; j < i + k; j++) {
        //         sum += nums[j];
        //     }
        //     double avg = (double)sum / k;
        //     if (avg > maxAvg) {
        //         maxAvg = avg;
        //     }
        // }
        // return maxAvg;
        int left=0;
        double cs=0;
        double mxavg = INT_MIN;
        for(int right=0; right<nums.size(); right++){
            cs += nums[right];
            if (right >= k-1){
                double cavg= cs/k;
                mxavg = max(cavg, mxavg);
                 cs -= nums[left];
                 left++;
            }
        }
        return mxavg;
    }
};