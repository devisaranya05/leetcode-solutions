class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        bool f=true;
        int l=0;
        int r=1;
        vector<int>p;
        while(f){
           if(numbers[l]+numbers[r]==target){
             f=false;
             p.push_back(l+1);
             p.push_back(r+1);
             break;
           }
           else if(numbers[l]+numbers[r] < target){
             r++;
           }
           else{
            l--;
           }
        }
        return p;
    }
};