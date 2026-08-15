class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        int count=1;
        int m=0;
        int sum=0;
        for(auto x: mp){
            if(x.second % 2 == 0){
                sum += x.second;
            }
            if(x.second % 2 != 0){
                sum += x.second - 1;
                count=0;
            }
        }
        // sum += m;
        if(count==0){
        return sum+1;
        }
        else{
            return sum;
        }
    }
};