class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
       int right=0, left=0;
       int avg, cs=0;
       int count=0;
       for(right=0; right<arr.size(); right++){
        cs += arr[right];
        if(right >= k-1){
            avg = cs/k;
            if(avg >= threshold){
                count++;
            }
            cs -= arr[left];
            left++;
        }
       } 
       return count;
    }
};