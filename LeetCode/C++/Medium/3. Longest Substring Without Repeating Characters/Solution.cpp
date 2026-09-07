class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int l=0, r=0;
        int m=0;
        char c;
        for(r=0; r<s.size(); r++){
            mp[s[r]]++;
            m++;
            if(mp[s[r]]==2){
                c=s[r];
                while(s[l] != s[r]){
                    l++;
                    m--;
                }
            }
            m= max(m, r-l+1);
        }
        return m;
    }
};