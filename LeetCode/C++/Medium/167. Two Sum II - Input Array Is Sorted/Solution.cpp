class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // bool f=true;
        // int l=0;
        // int r=1;
        // vector<int>p;
        // while(f){
        //    if(numbers[l]+numbers[r]==target){
        //      f=false;
        //      p.push_back(l+1);
        //      p.push_back(r+1);
        //      break;
        //    }
        //    else if(numbers[l]+numbers[r] < target){
        //      r++;
        //    }
        //    else{
        //     l--;
        //    }
        // }
        // return p;





         int l = 0;
        int r = numbers.size() - 1;

        while (l < r) {
            int sum = numbers[l] + numbers[r];

            if (sum == target) {
                return {l + 1, r + 1};
            }
            else if (sum < target) {
                l++;
            }
            else {
                r--;
            }
        }

        return {};



    }
};